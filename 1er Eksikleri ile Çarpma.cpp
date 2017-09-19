#include<iostream>
#include<locale.h>
using namespace std;

int main(){
	
	setlocale(LC_ALL,"Turkish"); //Türkçe karakter ekleme kodudur. Üstteki locale.h kütüphanesi olmadan çalýþmaz.
	
	cout<<"Bu programda girilen sayýlarýn 1er eksiðini alarak birbirleri ile çarpacaðýz."<<endl;
	
	int x,y;
	cout<<"Lütfen birinci sayýyý giriniz."<<endl;
	cin>>x;
	cout<<"Lütfen ikinci sayýyý giriniz."<<endl;
	cin>>y;
	
	--x;
	--y;
	
	cout<<"Bu iþlemde birinci sayýnýn 1 eksiði = "<<x<<endl; //Buraya x yerine --x yazdýðýmda sayýyý üstte ve burda 1 kere daha çýkarýyor. Yani iki kere çýkarma iþlemi yapýyor. Daha nasýl olduðunu anlayamadým ama üzerinde çalýþýyorum. 
	cout<<"Ýkinyi sayýnýn 1 eksiði = "<<y<<endl; // Eðer direk --x yerine x yazarsak üstten 1 çýkartýlmýþ halini yazýyor. Bu iþleme en doðru uyan yöntemdir. <<endl; kodu \n ile ayný görevdedir.
	cout<<"Bu iki sayýnýn çarpýmý = "<<x*y;
	
	
	
	
	return 0;
}
