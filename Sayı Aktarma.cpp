#include<iostream>
#include<locale.h>
using namespace std;

int main(){
	
	setlocale(LC_ALL,"Turkish");
	int sayi=10;
	float a,b,c;
	
	a = sayi/3;
	b = sayi/3.0;
	c = (float) sayi/3; //Burdaki c deðeri üstteki iki deðerden türünün hangisini seçerseniz o deðeri alttakine aktarýr. Mesela diyorum orda (float) veya (double) yazýyorsa b deki deðeri c ye aynen aktarýyor.
	                    //b'nin deðeri her zaman 3.3333 çýkýyor. Float yazýnca c ye aktarýyor. Normalde farklý çýkmasý gereken c deðeri b ile ayný oluyor. 
	                    //Float yerine int yazarsak a daki deðerin aynýsýný yazar. Buraya string yazamýyoruz. long , double , float ve int yazabiliyoruz.
	
	cout<< "a deðeri: "<< a << endl;
	cout<< "b deðeri: "<< b << endl;
	cout<< "c deðeri: "<< c << endl;
	
	
	
	
	return 0;
	
}
