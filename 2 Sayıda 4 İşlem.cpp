#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int a,b;
	cout<<"Bu programda girdiğiniz sayının 4 işlemi alınacaktır. Cevap aşağıya yazılacaktır. Eğer 1.sayı 2.sayı dan küçükse bölme işlemi 0 cevabını vericektir. İşleminizi ona göre yapınız."<<endl;
	cout<<"Lütfen birinci sayıyı giriniz -> ";
	cin>>a;
	cout<<"Lütfen ikinci sayıyı giriniz -> ";
	cin>>b;
	
	cout<<"2 Sayının Toplamı = "<<a+b<<endl;
	cout<<"2 Sayının Farkı = "<<a-b<<endl;
	cout<<"2 Sayının Çarpımı = "<<a*b<<endl;
	cout<<"2 Sayının Bölümü = "<<a/b<<endl;	
	return 0;
}
