#include<iostream>
using namespace std;



class batu{
	private:
		int sayi2;
		
		public:
			int sayi1;
			
			void atama_yap(int sayi1){
				sayi2=sayi1;
			}
			int ekrana_yaz(){
				return sayi2;
			}
}x,y;



int main(){
	x.atama_yap(50);
	y.atama_yap(100); 
   cout<<x.ekrana_yaz()<<endl;
   cout<<y.ekrana_yaz()<<endl;
   
}
