#include "kar_sayi.h"
#include <iostream>

int main(){

	sayi s1;//varsayýlan
	sayi s2(10);//int alan
	sayi s3(3.14);//double alan
	sayi s4(3, 18);//ikisini de alan
	sayi s5("234234 + 65456i");
	sayi s6("423424 - 75657i");
	cout << "getler: " << endl;
	s1.getGercek();
	s1.getKarmasik();
	s2.getGercek();
	s2.getKarmasik();
	s3.getGercek();
	s3.getKarmasik();
	s4.getGercek();
	s4.getKarmasik();
	
	s1.setGercek(12);
	s1.setKarmasik(14);
	s2.setGercek(16);
	s2.setKarmasik(33);
	s3.setGercek(21);
	s3.setKarmasik(65);
	s4.setGercek(32);
	s4.setKarmasik(40);
	
	cout << "\nyeni halleri"<<endl;
	s1.print();
	s2.print();
	s3.print();
	s4.print();
	
	cout << "\ntoplama" << endl;
	s1.add(s2);
	s1.print();

	cout << "\ncikarma" << endl;
	s3.subtract(s4);
	s3.print();

	cout << "\nbolme" << endl;
	s1.divide(s3);
	s1.print();
}
