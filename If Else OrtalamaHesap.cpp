#include<iostream>
using namespace std;


int main(){
	
	int ort;
	cout<<"Lutfen vize final ortalamanizi giriniz -> ";
	cin>>ort;
	
	if(ort>90)
	{
		cout<<"AA ile gectiniz.";
	}
	else if(ort>70)
	{
		cout<<"BB ile gectiniz.";
	}
	else if(ort>50)
	{
		cout<<"CC ile gectiniz.";
	}
	else
	{
		cout<<"Dersten kaldiniz!";
	}
	
	
	
	
	
	return 0;
}
