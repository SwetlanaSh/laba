#pragma once
#include <iostream>

using namespace std;
class dog {
public:
	void Gav() {
		cout << "Gav" << endl;
	}
};

class cat {
public:
	void Mya() {
		cout << "Mya" << endl;
	}
};
class complex: public dog, public cat
{
public:
	complex();
	complex(const complex& right);
	complex(double re, double im);
	~complex() {}
	//Set
	void setRe(double re) { this->re = re; }
	void setIm(double im) { this->im = im; }
	//Get
	double getRe() { return this->re; }
	double getIm() { return this->im; }

	//friend
	friend std::ostream &operator << (std::ostream &, const complex&);
	friend std::istream &operator >> (std::istream &, complex&);
	//перегрузка операторов + и -
	complex& operator+(complex& right);
	complex& operator-(complex& right);
	//статический метод
	static void showInfoAboutClass();

private:
	double re;
	double im;
};

