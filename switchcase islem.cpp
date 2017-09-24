#include<iostream>
#include<locale.h>
using namespace std;

int main(){
	
	setlocale(LC_ALL, "Turkish"); 
	
	int sonuc,a,b;
	cout<<"Lütfen 1.sayýyý giriniz -> ";
	cin>>a;
	cout<<"Lütfen 2.sayýyý giriniz -> ";
	cin>>b;
	
	cout<<"Lütfen yapmak istediðiniz iþlemin numarasýný giriniz."<<endl;
	cout<<"1-Toplama Ýþlemi"<<endl;
	cout<<"2-Çýkarma Ýþlemi"<<endl;
	cout<<"3-Çarpma Ýþlemi"<<endl;
	cout<<"4-Bölme Ýþlemi"<<endl;
	cin>>sonuc;
	
	switch(sonuc){
		
		case 1: cout<<"Girdiðiniz iki sayýnýn toplamý = "<<a+b<<endl;
		break;
		
		case 2: cout<<"Girdiðiniz iki sayýnýn farký = "<<a-b<<endl;
		break;
		
		case 3: cout<<"Girdiðiniz iki sayýnýn çarpýmý = "<<a*b<<endl;
		break;
		
		case 4: cout<<"Girdiðiniz iki sayýnýn bölümü = "<<a/b<<endl;
		break;
		
		default: cout<<"Lütfen verilen iþlemlerden birini seçiniz. 1,2,3,4 iþlem numarasý hariç herhangi bir iþlem yapýlmamaktadýr.";
		
		
		
		
		
	}
	
	
	
	
	return 0;
}
