#include <iostream>

using namespace std;

// 복소수 클래스
class ComplexNum {
	double real; // 실수
	double imag; // 허수
public:

	ComplexNum(int real=0, int imag=0) {
		this->real = real;
		this->imag = imag;
	}

	double getReal() { return real; }
	double getImag() { return imag; }

	void setReal(double real) { this->real = real; }
	void setImag(double imag) {	this->imag = imag; }

};

int main() {

	ComplexNum c1;
	ComplexNum c2(1, 2); // ComplexNum c2 = ComplexNum(1,2);
	ComplexNum c3 = { 2,3 };
	ComplexNum c4 = ComplexNum{ 3,4 };
	ComplexNum c5{ 4,5 };

	cout << "c1: " << c1.getReal() << " + " << c1.getImag() << 'i' << endl;
	cout << "c1: " << c2.getReal() << " + " << c2.getImag() << 'i' << endl;
}