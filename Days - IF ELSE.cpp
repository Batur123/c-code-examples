#include<iostream>
using namespace std;


int main(){
	
	char harf;
	
	cout<<"Bu programda her harf bir gunu temsil ediyor. Haftasonlari dahil degil. \n Harflerden birini seciceksiniz ve gunu soyleyecek. \n Lutfen buyuk kucuk yazimina dikkat ediniz. \n A,B,C,D,E Harflerinden bir tanesini seciniz -> ";
	cin>>harf;
	
	if(harf=='A')
	{
		cout<<"Bugun gunlerden Pazartesi'dir.";
	}
	else if(harf=='B')
	{
		cout<<"Bugun gunlerden Sali'dir.";
	}
	else if(harf=='C')
	{
		cout<<"Bugun gunlerden Carsamba'dir.";
	}
	else if(harf=='D')
	{
		cout<<"Bugun gunlerden Persembe'dir.";
	}
	else if(harf=='E')
	{
		cout<<"Bugun gunlerden Cuma'dir.";
	}
	else
	{
		cout<<"Verilen harflerden birini secmediniz.";
	}
	
	
	
	
	
	return 0;
}
