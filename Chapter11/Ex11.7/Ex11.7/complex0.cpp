#include <iostream>
#include "complex0.h"

complex complex::operator+(const complex & val) {
	return complex(re + val.re, im + val.im);
}
complex complex::operator-(const complex & val) {
	return complex(re - val.re, im - val.im);
}
complex complex::operator~() {
	return complex(re, -im);
}
complex complex::operator*(const complex & val) {
	return complex(re * val.re-im*val.im , re * val.im+im*val.re);
}
complex complex::operator*(double n) {
	return complex(n*re, n*im);
}

complex operator*(double n, const complex& val) {
	return complex(n*val.re,n*val.im);
}
std::ostream & operator<<(std::ostream & os, const complex& val) {
	os << "(" << val.re << "," << val.im << "i)";
	return os;
}
std::istream & operator>>(std::istream & os, complex& val) {
	std::cout << "skladowa rzeczywista: ";
	os >> val.re;
	std::cout << "skladowa urojona: ";
	os >> val.im;
	return os;
}