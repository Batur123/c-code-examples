#include <iostream>
#include<locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish"); 
	bool sonuc=true;
	
	cout<<"1-Toplama Ýþlemi"<<endl;
	
	cout<<"2-Çýkarma Ýþlemi"<<endl;
	
	cout<<"3-Çarpma Ýþlemi"<<endl;
	
	cout<<"4-Bölme Ýþlemi"<<endl;
	
	cout<<"5-Üst Alma Ýþlemi"<<endl;
	
	cout<<"6-Faktöriyel Alma Ýþlemi"<<endl;
	
	cout<<"Hangi iþlemi yapmak istiyorsunuz?"<<endl;
	
	
	while(sonuc){
		cout<<endl;
		cout<<"Ýþlemin numarasý = ";
		int x,y,z;
		
		cin>>z;
		cout<<endl;
		switch(z){
			
			case 1:{
				cout<<endl;
				cout<<" Toplama Ýþlemi -> Lütfen 1.Sayýyý giriniz: ";
				cin>>x;
				cout<<" Toplama Ýþlemi -> Lütfen 2.Sayýyý giriniz: ";
				cin>>y;
				cout<<"Sonuc= "<<x+y ;
				}
				break;
			 
			 case 2:{
			 	cout<<endl;
			 	cout<<" Çýkarma Ýþlemi -> Lütfen 1.Sayýyý giriniz: ";
			 	cin>> x;
			 	cout<<" Çýkarma Ýþlemi -> Lütfen 2.Sayýyý giriniz: ";
			 	cin>> y;
			 	cout<<"Sonuc= "<<x-y ;
				break;
				
			 case 3:{
			 	cout<<endl;
			 	cout<<" Çarpma Ýþlemi -> Lütfen 1.Sayýyý giriniz: ";
			 	cin>> x;
			 	cout<<" Çarpma Ýþlemi -> Lütfen 2.Sayýyý giriniz: ";
			 	cin>> y;
			 	cout<<"Sonuç= "<<x*y ;
				break;
				
			 case 4:{
			 	cout<<endl;
			 	cout<<" Bölme Ýþlemi -> Lütfen 1.Sayýyý giriniz: ";
			 	cin>> x;
			 	cout<<" Bölme Ýþlemi -> Lütfen 2.Sayýyý giriniz: ";
			 	cin>> y;
			 	if(x<y){
			 		cout<<" Hata ; ( X Y ' den küçük olamaz!) "<<"\n";
				 }else{
				 	cout<<"Sonuç = "<<x/y ;
				 }
				break;
			}
				
			 case 5:{
			 	cout<<endl;
			 	cout<<" Üst Alma Ýþlemi -> Lütfen 1.Sayýyý giriniz: ";
			 	cin>> x;
			 	cout<<" Üst Alma Ýþlemi -> Lütfen 2.Sayýyý giriniz: ";
			 	cin>> y;
			 	int temp=1;
			 	for (int i=0; i<y; i++){
			 		temp=temp * x;
				 }
				 
				 cout<<temp;
				break;
			}
			 case 6:{
			 	cout<<endl;
			 	cout<<" Faktoriyel Alma -> Lütfen sayýyý giriniz: ";
			 	cin>> x;
			 	int sonuc=x;
			 	for (int m=x; m>1; m--)
			 	{
			 		sonuc*=(m-1);
				 }
				 cout<<"Girdiðiniz sayýnýn faktöriyeli = "<<sonuc;
				break;
			 }
			 default:{
			 	cout<<"Lütfen verilen iþlemlerden birini giriniz. Harici çalýþmayacaktýr. Teþekkürler \n";
				break;
			}
			}
			}
			}
			}
			}
		
	
	

