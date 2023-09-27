#include <iostream>
#include <string>
#include <algorithm>
#include "input.h"
#include "Polynomial.h"
#include "Complex.h"
using namespace std;

int menuOption();
void Polynomials();
void ComplexNumbers();

int main()
{


	do
	{

		switch (menuOption())
		{

		case 0: exit(0); break;
		case 1: ComplexNumbers(); break;
		//case 2: Pseudo(); break;
		case 3: Polynomials(); break;


		}

	} while (true);

}


int menuOption()
{

	system("cls");


	cout << "\n" << string(100, char(205));
	cout << "\nCMPR131 - CHAPTER 4: COMPLEX NUMBERS, RATIONAL NUMBERS, POLYNOMIALS BY OSCAR GALLARDO (09/21/2023)";
	cout << "\n" << string(100, char(205));
	cout << "\n1> COMPLEX NUMBERS";
	cout << "\n2> RATIONAL NUMBERS";
	cout << "\n3> POLYNOMIALS";
	cout << "\n" << string(100, char(205));
	cout << "\n0> EXIT";
	cout << "\n" << string(100, char(205));


	return(inputInteger("\nOPTION: ", 0, 3));

	system("pause");


}

void ComplexNumbers()
{
	
	Complex menu1;

	menu1.displayInformation();

}

void Polynomials()
{

	int terms1 = 0;
	int terms2 = 0;
	int terms3 = 0;
	double multiply2 = 0.00;
	double* coeff2 = new double[terms1];
	double* coeff3 = new double[terms2];
	double* coeff4 = new double[terms3];
	bool check = false;

	do
	{

		start:
		system("cls");

		

		cout << "\n" << string(80, char(205));
		cout << "\n3> QUADRATIC MENU";
		cout << "\n" << string(80, char(205));
		cout << "\nA. A POLYNOMIAL";
		cout << "\nB. MULTIPLE POLYNOMIALS";
		cout << "\n" << string(80, char(205));
		cout << "\nX> RETURN TO MAIN MENU";
		cout << "\n" << string(80, char(205));

		switch (inputChar("\nOPTION: ", static_cast<string>("ABCDENRX")))
		{

		case 'X':
		{
			return;
		
		}
		break;

		case 'A':
		{

			do
			{

				system("cls");


				cout << "\n" << string(80, char(205));
				cout << "\nA> SINGLE POLYNOMIAL";
				cout << "\n" << string(80, char(205));
				cout << "\n1. ENTER THE NUMBER OF TERMS";
				cout << "\n2. SPECIFY THE COEFFICIENTS";
				cout << "\n3. EVALUATE EXPRESSION";
				cout << "\n4. SOLVE FOR THE DERIVATIVE";
				cout << "\n5. SOLVE FOR THE INTEGRAL";
				cout << "\n" << string(80, char(205));
				cout << "\n0> RETURN TO MAIN MENU";
				cout << "\n" << string(80, char(205));

				switch (inputInteger("\nOPTION: ", 0, 5))
				{


				case 1:
				{

					terms1 = inputInteger("\nENTER THE NUMBER OF TERMS: ", 1, 100);

					cout << endl;
					
					system("pause");

				}
				break;

				case 2:
				{

					coeff2 = new double[terms1];

					if (terms1 == 0) 
					{

						cout << "\n\t\t\tERROR: 0 term. Please re-specify the number of terms.";
						cout << endl;
						system("pause");
						break;

					}
				
					for (int i = 0; i < terms1; i++)
					{

						coeff2[i] = inputDouble("\nENTER COEFFICIENT: ");
						//flage it to true
						check = true;

					}


					Polynomial coeff1(coeff2, terms1);
					coeff1.setCoefficients(coeff2, terms1);
					coeff1.getCoefficients(coeff2, terms1);
					cout << endl;
					coeff1.display();
					cout << endl;

					cout << endl;
				
					system("pause");
				
				
				}
				break;

				case 3:
				{

					Polynomial coeff1(coeff2, terms1);
					coeff1.setCoefficients(coeff2, terms1);
					coeff1.getCoefficients(coeff2, terms1);
					if (terms1 == 0) 
					{

						cout << "\n\t\t\tERROR: 0 term. Please re-specify the number of terms.";
						cout << endl;
						system("pause");
						break;

					}
					if (check != true) 
					{

						cout << "\n\t\t\tERROR: expression. Please specify the coefficients.";
						cout << endl;
						system("pause");
						break;

					}

					double evaluate2 = inputDouble("\nENTER AMOUNT TO EVALUATE: ");

					cout << "\nEVALUATION: ";

					coeff1.Evaluation(evaluate2);

					cout << endl;
					cout << endl;

					system("pause");


				}
				break;

				case 4:
				{

					Polynomial coeff1(coeff2, terms1);
					coeff1.setCoefficients(coeff2, terms1);
					coeff1.getCoefficients(coeff2, terms1);
					if (terms1 == 0)
					{

						cout << "\n\t\t\tERROR: 0 term. Please re-specify the number of terms.";
						cout << endl;
						system("pause");
						break;

					}
					if (check != true)
					{

						cout << "\n\t\t\tERROR: expression. Please specify the coefficients.";
						cout << endl;
						system("pause");
						break;

					}

					cout << endl;
					cout << endl;

					coeff1.Derivative();

					cout << endl;
					cout << endl;

					system("pause");
				
				
				}
				break;

				case 5:
				{
					
					Polynomial coeff1(coeff2, terms1);
					coeff1.setCoefficients(coeff2, terms1);
					coeff1.getCoefficients(coeff2, terms1);
					if (terms1 == 0)
					{

						cout << "\n\t\t\tERROR: 0 term. Please re-specify the number of terms.";
						cout << endl;
						system("pause");
						break;

					}
					if (check != true)
					{

						cout << "\n\t\t\tERROR: expression. Please specify the coefficients.";
						cout << endl;
						system("pause");
						break;

					}

					cout << endl;
					cout << endl;

					coeff1.Integral();

					cout << endl;
					cout << endl;

					system("pause");
				
				
				}
				break;

				case 0:
				{
				
					delete[] coeff2;
					coeff2 = nullptr;
					terms1 = 0;
					goto start;
				
				}


				}


			} while (true);

		
		}
		break;

		case 'B':
		{

			system("cls");

			terms2 = inputInteger("\nENTER THE NUMBER OF TERMS: ", 1, 100);

			coeff3 = new double[terms2];

			for (int i = 0; i < terms2; i++)
			{

				coeff3[i] = inputDouble("\nENTER COEFFICIENT: ");
				//flage it to true
				
			}

			Polynomial coeff5(coeff3, terms2);
			coeff5.setCoefficients(coeff3, terms2);
			coeff5.getCoefficients(coeff3, terms2);
			cout << endl;
			coeff5.display();

			cout << endl;
			cout << endl;

			terms3 = inputInteger("\nENTER THE NUMBER OF TERMS: ", 1, 100);

			coeff4 = new double[terms3];

			for (int i = 0; i < terms3; i++)
			{

				coeff4[i] = inputDouble("\nENTER COEFFICIENT: ");
				//flage it to true

			}

			Polynomial coeff7(coeff4, terms3);
			coeff7.setCoefficients(coeff4, terms3);
			coeff7.getCoefficients(coeff3, terms3);
			cout << endl;
			coeff7.display();

			cout << endl;
			cout << endl;


			if(terms2 < terms3)
			{
				
				coeff7.PolynomialAdd(coeff3, coeff4, terms2);
			
			}
			else
			{
				
				coeff7.PolynomialAdd(coeff3, coeff4, terms3);
			
			}

			cout << endl;
			cout << endl;

			if (terms2 < terms3)
			{

				coeff7.PolynomialSubtract(coeff3, coeff4, terms2);

			}
			else
			{

				coeff7.PolynomialSubtract(coeff3, coeff4, terms3);

			}
		
			cout << endl;
			cout << endl;

			cout << endl;
			cout << "\n" << string(80, char(205));
			cout << endl;

			multiply2 = inputDouble("\nENTER VALUE TO MULTIPLY TO FUNCTIONS: ");
			cout << endl;

			cout << multiply2 << " * P(1): ";
			coeff5.MultiplyPoly(multiply2);
			cout << endl;
			cout << endl;
			cout << multiply2 << " * P(2): ";
			coeff7.MultiplyPoly(multiply2);


			cout << endl;
			cout << endl;
		
			delete[] coeff3;
			coeff3 = nullptr;
			delete[] coeff4;
			coeff4 = nullptr;
			terms2 = 0;
			terms3 = 0;

			system("pause");
		
		}
		break;

		}

	} while (true);

}