#include<iostream>
#include<locale.h>
using namespace std;




int main(){
	
	setlocale(LC_ALL, "Turkish"); 
	int sifre1,sifre2;
	string isim,soyisim;

	
	
	
	cout<<"==========================\n"<<endl;
	cout<<" Bankamatiðe Hoþgeldiniz\n"<<endl;
	cout<<"==========================\n"<<endl;
	
	cout<<"Ýsim Soyisim girerken lütfen TÜRKÇE karakterler kullanmayýnýz."<<endl;
	cout<<"Lütfen adýnýzý giriniz: ";
	
	cin>>isim;
	cout<<"Lütfen soyadýnýzý giriniz: ";
	
	cin>>soyisim;
	cout<<"Lütfen 4 haneli ve rakamlardan oluþan bir þifre belirleyiniz = ";
	cin>>sifre1;
	cout<<"Þifre kaydediliyor..."<<endl<<"..."<<endl<<"..."<<endl;
	
	cout<<"Þifreniz baþarýyla kaydedildi."<<endl;
	
	
		for(int i=0;i<3;i++){
		
	cout<<"Bankamatik sistemine girmek için lütfen þifrenizi giriniz = ";
	
	
	cin>>sifre2;
	
		if(sifre1==sifre2)
	{
		cout<<"Doðru þifre! Sisteme hoþgeldiniz. Ana menüye yönlendiriliyorsunuz."<<endl;
		i=4;
	}
	else
	{
		cout<<"Girdiðiniz þifre yanlýþtýr."<<endl;
		cout<<"Doðru þifreyi girmek için "<<2-i<<" hakkýnýz kaldý. "<<endl;
	}
	

	}

		if(sifre1==sifre2){
			cout<<"Hoþgeldiniz Sn."<<isim<<" "<<soyisim<<endl;
		}
		else{
			cout<<"Bankamatik sistemi kilitlenmiþtir. Þifrenizi 3 kere yanlýþ girdiniz."<<endl;
		}
	
	bool dongu=true;
	int bakiye=1500,paragirisi,paracikisi;
	int borc=150,faturaodeme,dongu2;
	cout<<"\n"<<endl;
	cout<<endl;
	cout<<"Ana Menüye Hoþgeldiniz. [BATUBANK]"<<endl;
	
	cout<<"Sayýn "<<isim<<" "<<soyisim<<endl;
	cout<<"Ne yapmak istiyorsunuz?"<<endl;
	cout<<"1-Bakiyemi göster."<<endl;
	cout<<"2-Para Çek"<<endl;
	cout<<"3-Para Yatýr"<<endl;
	cout<<"4-Fatura Öde"<<endl;
	
	
	while(dongu){
		cout<<endl;
		cout<<"Yapmak istediðiniz iþlemi seçiniz= ";
		cin>>dongu2;
		
		switch(dongu2){
			
			case 1:{
				cout<<"Mevcut Bakiyeniz = "<<bakiye;
				
				break;
			}
			
			case 2:{
				cout<<"Çekmek istediðiniz miktarý giriniz = ";
				cin>>paracikisi;
				bakiye = bakiye - paracikisi;
				cout<<endl;
				cout<<"Para çekme iþlemi baþarýyla gerçekleþmiþtir."<<endl;
				cout<<"Güncel Bakiyeniz = "<<bakiye<<endl;
				break;
			}
			
			case 3:{
				cout<<"Yatýrmak istediðiniz parayý giriniz = ";
				cin>>paragirisi;
				bakiye = bakiye + paragirisi;
				cout<<endl;
				cout<<"Para yatýrma iþlemi baþarýyla gerçekleþmiþtir."<<endl;
				cout<<"Güncel Bakiyeniz = "<<bakiye<<endl;
				
				break;
			}
			
			case 4:{
				int secim;
				if(borc==150){
				
				cout<<"Borç miktarýnýz = "<<borc<<endl;
				
				
				cout<<"Ödemek istiyormusunuz? Evet için 1 / Hayýr için 2 'ye basýnýz."<<endl;
				cin>>secim;
					
				if(secim==1){
					
					cout<<"Borcunuzu baþarýyla ödediniz."<<endl;
					bakiye = bakiye - borc;
					
					cout<<"Güncel Bakiyeniz = "<<bakiye<<endl;
					borc = 0;
				}
			    
			    else if(secim==2){
			    	
			    	cout<<"Ana menüye yönlendiriliyorsunuz."<<endl;
				}
				
				else{
				
				cout<<"1 veya 2 harici çalýþmayacaktir."<<endl;
				}
				
			}
			else{
				
				cout<<"Ödenmemiþ borcunuz yoktur. Bizi seçtiðiniz için teþekkürler. [BATUBANK]"<<endl;
				break;
			}
			
			}
			
			default:{
							
				cout<<"Verilen iþlemlerden birini seçiniz aksi halde çalýþmayacaktýr."<<endl;
				break;
			}
			
			
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	}
	

}


	

