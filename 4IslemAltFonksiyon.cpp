#include<iostream>
#include<locale.h>
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

using namespace std;


int toplama();
int cikarma();
int bolme();
int carpma();
void anamenu(){
	
    setlocale(LC_ALL, "Turkish");
	int islem;
    bool islemtekrar=true;
	cout<<"Hesap Makinesine Hoþgeldiniz!!!"<<endl<<endl;
		while(islemtekrar){
		
	cout<<"Hangi iþlemi yapmak istiyorsunuz?"<<endl;
	cout<<"1-Toplama 2-Çýkarma 3-Çarpma 4-Bölme"<<endl;
	cout<<"Yapmak Ýstediðiniz Ýþlem = ";
	cin>>islem;
	switch(islem){
		case 1:{
			
			toplama();
			break;
		}
		
		case 2:{
			
			cikarma();
			break;
		}
		
		case 3:{
			
			carpma();
			break;
		}
		
		case 4:{
			
			bolme();
			break;
		}
		
		default:{
			cout<<"=================================================="<<endl;
			cout<<"                    ""HATA!!!"<<endl;
			cout<<"Lütfen sadece verilen iþlemlerden birini seçiniz"<<endl;
			cout<<"=================================================="<<endl;
			anamenu();
			break;
		} 
	}
		
	
	}
	


}

int toplama(){
	
	int x,y;
	cout<<"========================="<<endl;
	cout<<"Toplama Ýþlemi"<<endl;
	cout<<"1.Sayýyý giriniz"<<" ";
	cin>>x;
	cout<<"2.Sayýyý giriniz"<<" ";
	cin>>y;
	
	cout<<"2 Sayýnýn toplamý = "<<x+y<<endl;
	cout<<"========================="<<endl;
 
}

int cikarma(){
	
	int x,y;
	cout<<"========================="<<endl;
	cout<<"Çýkarma Ýþlemi"<<endl;
	cout<<"1.Sayýyý giriniz"<<" ";
	cin>>x;
	cout<<"2.Sayýyý giriniz"<<" ";
	cin>>y;
	
	cout<<"2 Sayýnýn farký = "<<x-y<<endl;
	cout<<"========================="<<endl;
}

int carpma(){
	
	int x,y;
	cout<<"========================="<<endl;
	cout<<"Çarpma Ýþlemi"<<endl;
	cout<<"1.Sayýyý giriniz"<<" ";
	cin>>x;
	cout<<"2.Sayýyý giriniz"<<" ";
	cin>>y;
	
	cout<<"2 Sayýnýn çarpýmý = "<<x*y<<endl;
	cout<<"========================="<<endl;
}

int bolme(){
	
	int x,y;
	cout<<"========================="<<endl;
	cout<<"Bölme Ýþlemi"<<endl;
	cout<<"1.Sayýyý giriniz"<<" ";
	cin>>x;
	cout<<"2.Sayýyý giriniz"<<" ";
	cin>>y;
	
	if(x<y){
		cout<<"==============================="<<endl;
		cout<<"1.Sayý 2.Sayýdan küçük olamaz."<<endl;
		cout<<"ANA MENUYE GERI DONUYORSUNUZ"<<endl;
		cout<<"==============================="<<endl;
		anamenu();
	
	}
	else{
		cout<<"2 Sayýnýn bölümü = "<<x/y<<endl;
	}
	cout<<"========================="<<endl;
}

int main(){
	anamenu();
}
