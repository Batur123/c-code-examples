#include<iostream>
using namespace std;


int main(){
	
	int i=0;
	do {
		cout<<++i; // Sona endl komutu eklersek eðer sayýlarý yanyana deðilde alt alta yazmaya baþlýyor.
		           // Her 20 sayýdan sonra bir boþluk atýyor.
		if(i%20==0) //Burdaki komut sayýlarýn her satýrda 20 ye kadar yazýlmasýna olanak veriyor.
		cout<<endl;
	} while(i<5000); //Buda sayýlarýn kaça kadar yazýlacaðýnýn komutu oluyor.
	
	
	
	
	return 0;
}
