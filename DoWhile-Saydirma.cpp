#include<iostream>
using namespace std;

int main(){
	
	int sayi,i=0;
	
	cout<<"Bir sayi giriniz = ";
	cin>>sayi;
	
	do {
		i++;
		cout<<i<<"\t";
	} 
	while(i < sayi);
	
	cout<<endl;
	
	
	
	return 0;
}
