#include<iostream>
#include<locale.h>
using namespace std;

int main(){
	
	setlocale(LC_ALL, "Turkish"); 
	int X=0;
	int a[81]={2,8,5,X,9,1,4,X,7,1,7,6,X,3,4,9,8,X,9,4,3,8,5,X,1,6,2,5,2,X,1,6,8,7,9,X,6,3,7,9,4,X,2,1,8,X,9,1,3,7,X,5,4,6,4,1,X,5,2,3,6,7,9,3,5,9,7,1,6,8,2,4,7,6,2,4,8,9,3,5,1};
	
	cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<" "<<a[5]<<" "<<a[6]<<" "<<a[7]<<" "<<a[8]<<endl;
	cout<<a[9]<<a[10]<<a[11]<<a[12]<<a[13]<<a[14]<<a[15]<<a[16]<<a[17]<<endl;
	cout<<a[18]<<" "<<a[19]<<" "<<a[20]<<" "<<a[21]<<" "<<a[22]<<" "<<a[23]<<a[24]<<a[25]<<a[26]<<endl;
	cout<<a[27]<<a[28]<<a[29]<<a[30]<<a[31]<<a[32]<<a[33]<<a[34]<<a[35]<<endl;
	cout<<a[36]<<a[37]<<a[38]<<a[39]<<a[40]<<a[41]<<a[42]<<a[43]<<a[44]<<endl;
	cout<<a[45]<<a[46]<<a[47]<<a[48]<<a[49]<<a[50]<<a[51]<<a[52]<<a[53]<<endl;
	cout<<a[54]<<a[55]<<a[56]<<a[57]<<a[58]<<a[59]<<a[60]<<a[61]<<a[62]<<endl;
	cout<<a[63]<<a[64]<<a[65]<<a[66]<<a[67]<<a[68]<<a[69]<<a[70]<<a[71]<<endl;
	cout<<a[72]<<a[73]<<a[74]<<a[75]<<a[76]<<a[77]<<a[78]<<a[79]<<a[80]<<endl;

	cout<<"\t Sudoku Ýþlemi"<<endl;
	cout<<"\t==============="<<endl;
	
	cout<<"0 Olan yerleri doðru sayýlar ile doldurunuz."<<endl;
	cout<<"0 olan yeri giriniz = ";
	cin>>X;
	
	if(X==6){
		a[3]=X+a[3];
	}
	else{
		cout<<"Yanlýþ yaptýnýz.";
		return X;
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
