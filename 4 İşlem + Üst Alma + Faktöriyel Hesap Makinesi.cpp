#include <iostream>
using namespace std;
main()
{
	bool result=true;
	
	cout<<"1-Toplama Islemi";
	cout<<endl;
	cout<<"2-Cikarma Islemi";
	cout<<endl;
	cout<<"3-Carpma Islemi";
	cout<<endl;
	cout<<"4-Bolme Islemi";
	cout<<endl;
	cout<<"5-Ust Alma Islemi";
	cout<<endl;
	cout<<"6-Faktoriyel Alma";
	cout<<endl;
	
	
	while(result){
		cout<<endl;
		cout<<"Hangi islemi yapmak istiyorsunuz? -> Lutfen yapmak istediginiz islemin numarasini giriniz: ";
		int x,y,z;
		
		cin>>z;
		cout<<endl;
		switch(z){
			
			case 1:{
				cout<<endl;
				cout<<" Toplama Islemi -> Lutfen 1.Sayiyi giriniz: ";
				cin>>x;
				cout<<" Toplama Islemi -> Lutfen 2.Sayiyi giriniz: ";
				cin>>y;
				cout<<"Sonuc= "<<x+y<< "\n" ;
				}
				break;
			 
			 
			 case 2:{
			 	cout<<endl;
			 	cout<<" Cikarma Islemi -> Lutfen 1.Sayiyi giriniz: ";
			 	cin>> x;
			 	cout<<" Cikarma Islemi -> Lutfen 2.Sayiyi giriniz: ";
			 	cin>> y;
			 	cout<<"Sonuc= "<<x-y<< "\n" ;
				break;
				
			 case 3:{
			 	cout<<endl;
			 	cout<<" Carpma Islemi -> Lutfen 1.Sayiyi giriniz: ";
			 	cin>> x;
			 	cout<<" Carpma Islemi -> Lutfen 2.Sayiyi giriniz: ";
			 	cin>> y;
			 	cout<<"Sonuc= "<<x*y<< "\n" ;
				break;
				
			 case 4:{
			 	cout<<endl;
			 	cout<<" Bolme Islemi -> Lutfen 1.Sayiyi giriniz: ";
			 	cin>> x;
			 	cout<<" Bolme Islemi -> Lutfen 2.Sayiyi giriniz: ";
			 	cin>> y;
			 	if(x<y){
			 		cout<<" Hata ; ( X Y ' den kucuk olamaz!) "<<"\n";
				 }else{
				 	cout<<"Sonuc= "<<x/y<< "\n" ;
				 }
				break;
			}
				
			 case 5:{
			 	cout<<endl;
			 	cout<<" Ust Alma Islemi -> Lutfen 1.Sayiyi giriniz: ";
			 	cin>> x;
			 	cout<<" Ust Alma Islemi -> Lutfen 2.Sayiyi giriniz: ";
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
			 	cout<<" Faktoriyel Alma -> Lutfen Sayiyi giriniz: ";
			 	cin>> x;
			 	int sonuc=x;
			 	for (int m=x; m>1; m--)
			 	{
			 		sonuc*=(m-1);
				 }
				 cout<<sonuc;
				break;
			 }
			 default:{
			 	cout<<"Lutfen verilen islemlerden birini seciniz. Harici calismayacaktir. Tesekkurler\n";
				break;
			 }
			  }
			 }
			 }
			 }
			}
		
	
	

