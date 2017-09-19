#include<iostream>
#include<locale.h>
using namespace std;


int main(){

	setlocale(LC_ALL, "Turkish");
	int a,b;
	
	cout<<"Burda girdiginiz iki sayinin toplami ve farki yazilacaktir. ýýýýý "<<endl;
	cout<<"Birinci sayiyi giriniz -> ";
	cin>>a;
	cout<<"Ikinci sayiyi giriniz -> ";
	cin>>b;
	cout<<"Iki sayinin toplami -> "<<a+b<<endl;
	cout<<"Iki sayinin farki -> "<<a-b<<endl;
	
	
	
	return 0;
}
