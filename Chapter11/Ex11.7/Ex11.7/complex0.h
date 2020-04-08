#pragma once

class complex {
private:
	double re;
	double im;
public:
	complex(): re(0.0), im(0.0) {}
	complex(double rez, double imz): re(rez),im(imz) {}

	complex operator+(const complex & val);
	complex operator-(const complex & val);
	complex operator~();
	complex operator*(const complex & val);
	complex operator*(double n);

	friend complex operator*(double n, const complex& val);
	friend std::ostream & operator<<(std::ostream & os, const complex& val);
	friend std::istream & operator>>(std::istream & os, complex& val);
};
