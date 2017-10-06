#include<iostream>
using namespace std;



int main(){

    int X=0,Y=0,Z=0,T=0;
	int a[16]={1,X,3,4,3,Y,2,1,4,Z,1,T,2,1,4,3};
	
	cout<<a[0]<<a[1]<<a[2]<<a[3]<<endl;
	cout<<a[4]<<a[5]<<a[6]<<a[7]<<endl;
	cout<<a[8]<<a[9]<<a[10]<<a[11]<<endl;
	cout<<a[12]<<a[13]<<a[14]<<a[15]<<endl;
	
	
	cout<<"Sudokuda bosluklari tamamlayiniz."<<endl;
	
	cout<<"Ilk boslugu giriniz = ";
	cin>>X;
	
	
	if(X==2){
		a[1]=X+a[1];
	}
	else{
		cout<<"Girdiginiz sayi yanlistir"<<endl;
	}
	cout<<a[0]<<a[1]<<a[2]<<a[3]<<endl;
	cout<<a[4]<<a[5]<<a[6]<<a[7]<<endl;
	cout<<a[8]<<a[9]<<a[10]<<a[11]<<endl;
	cout<<a[12]<<a[13]<<a[14]<<a[15]<<endl;
	
	cout<<"Ikinci boslugu giriniz = ";
	cin>>Y;
	
		if(Y==4){
		a[5]=Y+a[5];
	}
	else{
		cout<<"Girdiginiz sayi yanlistir"<<endl;
	}
	cout<<a[0]<<a[1]<<a[2]<<a[3]<<endl;
	cout<<a[4]<<a[5]<<a[6]<<a[7]<<endl;
	cout<<a[8]<<a[9]<<a[10]<<a[11]<<endl;
	cout<<a[12]<<a[13]<<a[14]<<a[15]<<endl;
	
		
	cout<<"Ucuncu boslugu giriniz = ";
	cin>>Y;
	
		if(Y==3){
		a[9]=Y+a[9];
	}
	else{
		cout<<"Girdiginiz sayi yanlistir"<<endl;
	}
	cout<<a[0]<<a[1]<<a[2]<<a[3]<<endl;
	cout<<a[4]<<a[5]<<a[6]<<a[7]<<endl;
	cout<<a[8]<<a[9]<<a[10]<<a[11]<<endl;
	cout<<a[12]<<a[13]<<a[14]<<a[15]<<endl;
	
		
	cout<<"Dorduncu boslugu giriniz = ";
	cin>>Y;
	
		if(Y==2){
		a[11]=Y+a[11];
		cout<<"Tebrikler. Sudokuyu dogru sekilde bitirdiniz."<<endl;
	}
	else{
		cout<<"Girdiginiz sayi yanlistir"<<endl;
	}
	cout<<a[0]<<a[1]<<a[2]<<a[3]<<endl;
	cout<<a[4]<<a[5]<<a[6]<<a[7]<<endl;
	cout<<a[8]<<a[9]<<a[10]<<a[11]<<endl;
	cout<<a[12]<<a[13]<<a[14]<<a[15]<<endl;
	
	
	

	
	
	
	
	
	
	
	return 0;
}
