#include<iostream>
using namespace std;

int main(){
	
	int i;
	for(i=0;i<=20;i+=2){
		if(i==10)
		continue;
		if(i==14)
		break;
		cout<<i<<endl;
	}
return 0;	
	
}
