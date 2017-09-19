#include<iostream>
using namespace std;

int main(){
	
	int x,y;
	cout<<"Bu programda girilen 1.sayinin 1 ile toplami , girilen 2.sayinin 1 ile farki otomatik olarak yapilacaktir. "<<endl;
	cout<<"Birinci sayiyi giriniz -> "<<endl;
	cin>>x;
	cout<<"Ikinci sayiyi giriniz -> "<<endl;
	cin>>y;
	
	++x;
	--y;
	cout<<"Cevaplar..."<<endl;
	cout<<x<<endl;
	cout<<y<<endl;
	
	
	
	return 0;
}
