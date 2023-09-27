#pragma once
#include <string>
#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;



class Polynomial
{

private:

	double* coefficients;
	int termSize;
	double evaluate;

public:


	Polynomial(double* coeff, int terms1);

	~Polynomial();

	double getCoefficients(double* coeff1, int terms2) const;

	void setCoefficients(double* coeff1, int terms2);

	void display() const;

	void Evaluation(double x) const;

	void Derivative() const;

	void Integral() const;

	void PolynomialAdd(double* coeff1, double* coeff2, int size) const;

	void PolynomialSubtract(double* coeff1, double* coeff2, int size) const;

	void MultiplyPoly(double x1) const;

};

