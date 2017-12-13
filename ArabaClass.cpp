#include<iostream>
using namespace std;


	
	class araba{
		public:
			int hiz,tekerlek,model,fiyat;
			string marka;
		
		void bilgi(){
			cout<<"Arabanin Hizi = "<<hiz<<"km/sa"<<endl;
			cout<<"Arabanin Tekerlek Sayisi = "<<tekerlek<<endl;
			cout<<"Arabanin Yili/Modeli = "<<model<<endl;
			cout<<"Arabanin Fiyati = "<<fiyat<<endl;
			cout<<"Arabanin Markasi = "<<marka<<endl;
		
		}
		
		int giris(){
	         cout<<"Arabanin hizini giriniz = ";
   	         cin>>hiz;
   	         cout<<"Arabanin fiyatini giriniz = ";
         	 cin>>fiyat;
   	         cout<<"Araba kac tekerleklidir = ";
   	         cin>>tekerlek;
   	         cout<<"Araba kac yilin modelidir = ";
   	         cin>>model;
   	         cout<<"Arabanin markasi nedir = ";
   	         cin>>marka;
   	
 
		}
			
		
	}x;


   int main(){

   	x.giris();
   	x.bilgi();
   	
   	return 0;
   }
