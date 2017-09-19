#include<iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Turkish");
	int a,b;
	cout<<"Bu programda girdiðiniz sayýnýn 4 iþlemi alýnacaktýr. Cevap aþaðýya yazýlacaktýr. Eðer 1.sayý 2.sayý dan küçükse bölme iþlemi 0 cevabýný vericektir. Ýþleminizi ona göre yapýnýz."<<endl;
	cout<<"Lütfen birinci sayýyý giriniz -> ";
	cin>>a;
	cout<<"Lütfen ikinci sayýyý giriniz -> ";
	cin>>b;
	
	cout<<"2 Sayýnýn Toplamý = "<<a+b<<endl;
	cout<<"2 Sayýnýn Farký = "<<a-b<<endl;
	cout<<"2 Sayýnýn Çarpýmý = "<<a*b<<endl;
	cout<<"2 Sayýnýn Bölümü = "<<a/b<<endl;
	
	cout<<"Program Batuhan Özkoç tarafýndan yazýlmýþtýr. Kullandýðýnýz için teþekkürler :)";
	
	
	
	
	
	
	
	
	return 0;
}
