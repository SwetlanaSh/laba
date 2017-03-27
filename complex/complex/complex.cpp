#include "complex.h"

complex::complex() {
	this->re = 0;
	this->im = 0;
}

complex::complex(const complex& right) {
	*this = right;
}

complex::complex(double re, double im) {
	this->re = re;
	this->im = im;
}

std::ostream &operator << (std::ostream &output, const complex &a) {
	cout << "Complex number" << endl;
	output << fixed << "Re: " << a.re << endl
		<< "Im: " << a.im << endl;

	return output;
}

std::istream &operator >> (std::istream &input, complex &a) {
	cout << "Enter complex number: " << endl;
	input >> a.re >> a.im;

	return input;
}

complex& complex::operator+(complex& right) {
	return complex(this->re + right.re, this->im + right.im);
}

complex& complex::operator-(complex& right) {
	return complex(this->re - right.re, this->im - right.im);
}

void complex::showInfoAboutClass() {
	cout << "This is a class for working with complex number" << endl;
}