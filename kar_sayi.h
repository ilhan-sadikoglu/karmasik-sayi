#pragma once
#include <string>
using namespace std;

class sayi {
	double gercek,karmasik;
public:
	sayi();//default
	sayi(double);//reel
	sayi(int);//tam
	sayi(double,double);//reel+karmaþýk
	sayi(const string& st1);
	

	void setGercek(const double& a);//gerçek kýsmý düzenler
	void getGercek()const;//gerçek kýsmý getirir
	void setKarmasik(const double& a);//karmaþýk kýsmý düzenler
	void getKarmasik()const;//karmaþýk kýsmý getirir
	
	void add(const sayi&);
	void subtract(const sayi&);
	void divide(const sayi&);
	void print();

	

};