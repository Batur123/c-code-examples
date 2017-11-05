#include<iostream>
using namespace std;


int main(){
	
	int sayi;
	
	cout<<"Sayinin cift olup olmadigini bulma islemi"<<endl;
	cout<<"Lutfen bir sayi giriniz";
	cin>>sayi;
	
	
	if(sayi %2==1){
		cout<<"Sayiniz Tek sayidir.";
	}
	else if(sayi %2==0){
		cout<<"Sayiniz Cift sayidir.";
	}
	else{
		cout<<"Hata";
	}
	
	
	
	
	return 0;
}
