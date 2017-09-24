#include<iostream>
using namespace std;

int main(){
	
	int toplam=0;
	int sayi[10]={1,3,2,5,7,1,2,3,5,7};
	
	for(int i=0;i<10;i++)
	{
		toplam=toplam+sayi[i];
	}
	cout<<"Dizideki sayilarin toplami = "<<toplam<<endl;
	
}
