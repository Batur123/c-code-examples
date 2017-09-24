#include<iostream>
using namespace std;

int main(){
	
	int sifre=1945,sifre1,hak=3;
	
	cout<<"Istenilen sifre 4 haneli bir sayidir. 3 Tane hakkiniz vardir. \n Lutfen sifreyi giriniz -> ";
	cin>>sifre1;
	
	if(sifre==sifre1)
	{
		cout<<"Girdiginiz sifre dogrudur."<<endl;
	}
	else
	{
		cout<<"Girdiginiz sifre yanlistir."<<endl;
		hak--;
		cout<<"Dogru girmek icin 2 hakkiniz kaldi. "<<endl;
	}
	
	cout<<"Sifreyi giriniz = ";
	cin>>sifre1;
	
if(sifre==sifre1)
	{
		cout<<"Girdiginiz sifre dogrudur."<<endl;
	}
	else
	{
		cout<<"Girdiginiz sifre yanlistir."<<endl;
		hak--;
		cout<<"Dogru girmek icin 1 hakkiniz kaldi. "<<endl;
	}
	
    cout<<"Sifreyi giriniz = ";
	cin>>sifre1;
	
	if(sifre==sifre1)
	{
		cout<<"Girdiginiz sifre dogrudur."<<endl;
	}
	else
	{
		cout<<"Girdiginiz sifre yanlistir."<<endl;
		hak--;
		cout<<"Dogru girmek icin hakkiniz kalmadi. "<<endl;
	}
	
	
	
	
	
	
	
	return 0;
}
