#include<iostream>
#include<locale.h>
using namespace std;




int toplam(){
	
	int x,y;
	cout<<"Toplama Islemi "<<endl;
	cout<<"1.Sayıyı giriniz = ";
	cin>>x;
	cout<<"2.Sayıyı giriniz = ";
	cin>>y;
	return x+y;
	
	
}

int fark(){
	
	int x,y;
	cout<<"Çıkarma İşlemi "<<endl;
	cout<<"1.Sayıyı giriniz = ";
	cin>>x;
	cout<<"2.Sayıyı giriniz = ";
	cin>>y;
	return x-y;
	
}

int carpim(){
	
	int x,y;
	cout<<"Çarpma İşlemi"<<endl;
	cout<<"1.Sayıyı giriniz = ";
	cin>>x;
	cout<<"2.Sayıyı giriniz = ";
	cin>>y;
	return x*y;    
	
	
	
	
	
}

int bolum(){
	
	int x,y;
	cout<<"Bölme İşlemi "<<endl;
	cout<<"1.Sayıyı giriniz = ";
	cin>>x;
	cout<<"2.Sayıyı giriniz = ";
	cin>>y;
	if(x<y){
		
		cout<<"Hata!!! X ' Y den küçük olamaz.'";
		
	}
	else{
		return x/y;
	}
	
	
	
	
	
}

int main(){
	setlocale(LC_ALL, "Turkish"); 
	cout<<"Girdiğiniz 2 Sayının Toplamı = "<<toplam()<<endl<<endl;
	cout<<"Girdiğiniz 2 Sayının Farkı = "<<fark()<<endl<<endl;
	cout<<"Girdiğiniz 2 Sayının Çarpımı = "<<carpim()<<endl<<endl;
	cout<<"Girdiğiniz 2 Sayının Bölümü = "<<bolum()<<endl<<endl;
	
	
	
	return 0;
}
