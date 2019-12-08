// Geometric.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

class Geometric
{
public:
	Geometric(double a0, double  q) : q_(q), a0_(a0) {	 }
	double operator[](int n) const;
private:
	double q_;
	double a0_;
};

double Geometric::operator[](int n) const
{
	return a0_ * pow(q_, n);
}


int main()
{
	const Geometric geometric(1., 0.5); std::cout << geometric[2] << std::endl;
}

