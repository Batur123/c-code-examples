#include<iostream>
using namespace std;

int main(){
	
	int i,fakt=1;
	cout<<"Faktoriyeli alinacak sayiyi giriniz = ";
	cin>>i;
	for(i;i>1;i--){
		fakt=fakt*i;
	}
	cout<<fakt<<endl;
	



return 0;	
	
}
