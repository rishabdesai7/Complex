#pragma once
#include<iostream>
using namespace std;
class Complex {
private:
	double real, complex;
public:
	Complex() {
		real = complex = 0;
	}
	Complex(double r, double c) {
		this->real = r;
		this->complex = c;
	}
	double getreal() {
		return real;
	}
	double getcomplex() {
		return complex;
	}
	Complex operator -() {
		return Complex(-(this->real), -(this->complex));
	}
	Complex operator +(Complex c1) {
		return Complex(this->real + c1.getreal(), this->complex + c1.getcomplex());
	}
	Complex operator -(Complex c) {
		return *this + (-c);
	}
	Complex operator *(Complex C) {
		int r, c;
		r = real * C.getreal() - complex * C.getcomplex();
		c = real * C.getcomplex() - complex * C.getreal();
		return Complex(r, c);
	}
	Complex operator /(Complex C) {
		Complex res(C.getreal(), -C.getcomplex());
		res = res * (*this);
		int k = (C.getreal()*C.getreal()) + (C.getcomplex()*C.getcomplex());
		return Complex((double)res.getreal() / k, (double)res.getcomplex() / k);
	}
	void operator +=(Complex c) {
		Complex res = *this + c;
		real = res.getreal();
		complex = res.getcomplex();
	}
	void operator -=(Complex c) {
		Complex res = *this - c;
		real = res.getreal();
		complex = res.getcomplex();
	}
	void operator *=(Complex c) {
		Complex res = (*this) * c;
		real = res.getreal();
		complex = res.getcomplex();
	}
	void operator /=(Complex c) {
		Complex res = (*this) / c;
		real = res.getreal();
		complex = res.getcomplex();
	}
	friend ostream &operator<<(ostream &output, Complex &D) {
		output << D.real << "+" << D.complex << "j";
		return output;
	}

	friend istream &operator>>(istream  &input, Complex &D) {
		input >> D.real >> D.complex;
		return input;
	}
};

