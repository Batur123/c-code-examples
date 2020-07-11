#include <iostream>

using namespace std;

int main()
{
	int x;
	string durum;
	
	cout<<"Gir?: ";
	cin>>x;
	
	durum = (x%2 == 0) ? "cift" : "tek";
	
	x==5 ? cout<<"Sayi 5"<<endl:cout<<"Sayi 5 haric herhangi birsey"<<endl; //Bu neden calisti aklim almiyor.
	
	cout<<durum<<endl;
	
}
