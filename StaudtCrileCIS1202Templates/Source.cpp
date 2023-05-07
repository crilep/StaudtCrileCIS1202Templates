//Crile Staudt
//CIS 1202 101
//May 7, 2023

#include<iostream>
#include <cmath>

using namespace std;

template <class T>
T Half(T num) {

	T half = (num / 2);

	return half;

}

int Half(int i) {

	double integer = static_cast<double>(i);
	float half = (integer / 2);
	int intFinal = round(half);

	return intFinal;

}

int main() {

	double a = 7.0;
	float b = 5.0;
	int c = 3;

	cout << Half(a) << endl;
	cout << Half(b) << endl;
	cout << Half(c) << endl;


}



