#include "Polynomial.h"



Polynomial::Polynomial(double* coeff, int terms1)
{
	
	coefficients = new double[terms1];
	termSize = terms1;
	evaluate = 0;

	for(int i = 0; i < termSize; i++)
	{
		
		coefficients[i] = 0;
	
	}

}

Polynomial::~Polynomial()
{

	delete[] coefficients;

	termSize = 0;

}

double Polynomial::getCoefficients(double* coeff, int terms1) const
{

	for(int i = 0; i < terms1; i++)
	{
	
		return coefficients[i];
	
	}

}

void Polynomial::setCoefficients(double* coeff, int terms1)
{
	
	for(int i = 0; i < terms1; i++)
	{
		
		coefficients[i] = coeff[i];
	
	}

}

void Polynomial::display() const
{

	cout << "The P(x) is entered: ";
	for (int i = 0; i < termSize; i++)
	{
		if ((termSize - 1) - i == 1) 
		{

			cout << coefficients[i] << "X + ";

		}
		else if ((termSize - 1) - i == 0) 
		{

			cout << coefficients[i];
			break;

		}
		else 
		{
			//3 index[0][1][2][3] - 1 
			cout << coefficients[i] << "X^" << (termSize - 1) - i << " + ";

		}
	}

}

void Polynomial::Evaluation(double evaluate1) const
{

	double evaluation = 0;

	for(int i = 0; i < termSize; i++)
	{
		
		evaluation += coefficients[i] * (pow(evaluate1, ((termSize - 1) - i)));

		
	
	}

	cout << evaluation;

}

void Polynomial::Derivative() const
{

	cout << "P(x)/dx: ";
	for (int i = 0; i < termSize; i++)
	{
		if ((termSize - 1) - i == 1)
		{

			cout << coefficients[i];

		}
		else if ((termSize - 1) - i == 0)
		{

			break;

		}
		else
		{
			//3 index[0][1][2][3] - 1 
			cout << ((termSize - 1) - i) * coefficients[i] << "X^" << (termSize - 2) - i << " + ";

		}
	}

}

void Polynomial::Integral() const
{

	cout << "P(x)dx: ";
	for (int i = 0; i < termSize; i++)
	{
		if ((termSize - 1) - i == 1)
		{

			cout << coefficients[i] / 2 << "X^" << 2 << " + ";

		}
		else if ((termSize - 1) - i == 0)
		{

			cout << coefficients[i] << "X";
			break;

		}
		else
		{
			//3 index[0][1][2][3] - 1 
			cout << coefficients[i] / (termSize - i) << "X^" << (termSize - i) << " + ";

		}
	}

}

void Polynomial::PolynomialAdd(double* coeff3, double* coeff4, int size1) const
{

	cout << "P1 + P2: ";
	for (int i = 0; i < size1; i++)
	{
		if ((size1 - 1) - i == 1)
		{

			cout << (coeff3[i] + coeff4[i]) << "X + ";

		}
		else if ((termSize - 1) - i == 0)
		{

			cout << coeff3[i] + coeff4[i];
			break;

		}
		else
		{
			//3 index[0][1][2][3] - 1 
			cout << (coeff3[i] + coeff4[i]) << "X^" << (termSize - 1) - i << " + ";

		}
	}


}

void Polynomial::PolynomialSubtract(double* coeff3, double* coeff4, int size1) const
{

	cout << "P1 - P2: ";
	for (int i = 0; i < size1; i++)
	{
		if ((size1 - 1) - i == 1)
		{

			cout << (coeff3[i] - coeff4[i]) << "X + ";

		}
		else if ((termSize - 1) - i == 0)
		{

			cout << coeff3[i] - coeff4[i];
			break;

		}
		else
		{
			//3 index[0][1][2][3] - 1 
			cout << (coeff3[i] - coeff4[i]) << "X^" << (termSize - 1) - i << " + ";

		}
	}


}


void Polynomial::MultiplyPoly(double multiply2) const
{

	//cout << "The P(x) is entered: ";
	for (int i = 0; i < termSize; i++)
	{
		if ((termSize - 1) - i == 1)
		{

			cout << multiply2 * coefficients[i] << "X + ";

		}
		else if ((termSize - 1) - i == 0)
		{

			cout << multiply2 * coefficients[i];
			break;

		}
		else
		{
			//3 index[0][1][2][3] - 1 
			cout << multiply2 * coefficients[i] << "X^" << (termSize - 1) - i << " + ";

		}
	}

}
