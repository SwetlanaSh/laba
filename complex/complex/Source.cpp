#include <iostream>
#include "complex.h"

using namespace std;

int main() {

	complex c1 = complex(); //конструктор без параметров
	complex c2(c1); //конструктор копирования
	//использование set методов
	c2.setRe(14);
	c2.setIm(-4);
	c1.setRe(11);
	c1.setIm(4);
	//помещение в поток и использование перегруженных операторов
	cout << c1;
	auto c3 = c2 + c1;
	cout << c3;
	//научили наше комплексное число гавкать и мяукать
	c2.Mya();
	c1.Gav();
	//вызов статического метода
	complex::showInfoAboutClass();
	
	//вызов деструктора
	c1.~complex();
	return 0;
}