#include <iostream>
#include <string.h>
#include <locale.h>


//using namespace std;

struct Kisi
{
	int ID;
	char ad[30];
	char soyad[30];
	char okulno[12];
};


int main()
{
	setlocale(LC_ALL, "Turkish");
	
	struct Kisi KisiYarat;

	KisiYarat.ID = 1;

	strcpy_s(KisiYarat.ad, "Batuhan");
	strcpy_s(KisiYarat.soyad, "Özkoç");
	strcpy_s(KisiYarat.okulno, "16008116032");

	std::cout << "---------- KİŞİ BİLGİLERİ --------------" << std::endl;
	std::cout << KisiYarat.ad << std::endl << KisiYarat.soyad << std::endl << KisiYarat.okulno << std::endl;
	std::cout << "---------- KİŞİ BİLGİLERİ --------------";
	return 0;
}

