#include <iostream>

using namespace std;
class Fraction
{
private:
	int num1, num2, den1, den2;   //declaring the class member variables as private
public:                        //member functions are declared as public so the can be accessed from outside the class
	int DenAdd(int, int);    //prototype of the function that return the denominator when adding
	int NumAdd(int, int, int, int);       // ||       ||         ||  numerator when adding
	int NumSub(int, int, int, int);       // ||       ||         ||  numerator when subtracting
	int DenSub(int, int);       // ||       ||         ||  denominator when subtracting
	int NumMult(int, int);      // ||       ||         ||  numerator when multiplication
	int DenMult(int, int);      // ||       ||         ||  denominator when multiplying
	int NumDiv(int, int);       // ||       ||         ||  numerator when dividing
	int DenDiv(int, int);       // ||       ||         ||  denominator when dividing
	void printfrac(int, int, int, int);      // prototype of the function to print the fraction
	Fraction();                // default constructor
	~Fraction();        // destructor
};
//This is our main function
int main()
{
	Fraction myfraction; //this our object which will assist in accessing the members of class fraction
	int numerator1, numerator2, denominator1, denominator2;
	cout << "please enter the numerator of the first fraction" << "\n";
	cin >> numerator1;
	cout << "please enter the denominator of the first fraction" << "\n";
	cin >> denominator1;
	cout << "please enter the numerator of the second fraction" << "\n";
	cin >> numerator2;
	cout << "please enter the denominator of the second fraction" << "\n";
	cin >> denominator2;
	myfraction.printfrac(numerator1, denominator1, numerator2, denominator2);
	return 0;
}
Fraction::Fraction()
{

}
Fraction::~Fraction()
{

}
//here is the manipulation of the fractions
//to get denominator during fraction addition
int Fraction::DenAdd(int denom1, int denom2)
{
	den1 = denom1;
	den2 = denom2;
	return (denom1*denom2);
}
//here is the manipulation of the fractions
//to get numerator during fraction addition
int Fraction::NumAdd(int d1, int d2, int nu1, int nu2)
{
	den1 = d1;
	den2 = d2;
	num1 = nu1;
	num2 = nu2;
	return((nu1*d2) + (nu2*d1));
}
//here is the manipulation of the fractions
//to get numerator during fraction subtraction
int Fraction::NumSub(int de1, int de2, int numr1, int numr2)
{
	den1 = de1;
	den2 = de2;
	num1 = numr1;
	num2 = numr2;
	return((numr1*de2) - (numr2*de2));
}
//here is the manipulation of the fractions
//to get denominator during fraction subtraction
int Fraction::DenSub(int deno1, int deno2)
{
	den1 = deno1;
	den2 = deno2;
	return (deno1*deno2);
}
//here is the manipulation of the fractions
//to get numerator during fraction multiplication
int Fraction::NumMult(int numer1, int numer2)
{
	num1 = numer1;
	num2 = numer2;
	return(numer1*numer2);
}
//here is the manipulation of the fractions
//to get denominator during fraction multiplication
int Fraction::DenMult(int denomin1, int denomin2)
{
	den1 = denomin1;
	den2 = denomin2;
	return (denomin1*denomin2);
}
//here is the manipulation of the fractions
//to get numerator during fraction division
int Fraction::NumDiv(int numera1, int denomina2)
{
	num1 = numera1;
	den2 = denomina2;
	return (numera1*denomina2);
}
//here is the manipulation of the fractions
//to get denominator during fraction division
int Fraction::DenDiv(int numerat2, int denominat1)
{
	numerat2 = num2;
	denominat1 = den1;
	return(numerat2*denominat1);
}
//The following function call all the functions to display the necessary information
void Fraction::printfrac(int nr1, int dr1, int nr2, int dr2)
{
	if (dr1 = 0)
		cout << "undefine \n";
	else if (dr2 = 0)
		cout << "undefine\n";
	else
	{
		num1 = nr1;
		num2 = nr2;
		den1 = dr1;
		den2 = dr2;
		cout << "Addition:       \n" << nr1 << "/" << dr1 << " + " << nr2 << "/" << dr2 << " = " << NumAdd(dr1, dr2, nr1, nr2) << "/" << DenAdd(dr1, dr2) << "\n";
		cout << "Subtraction:    \n" << nr1 << "/" << dr1 << " - " << nr2 << "/" << dr2 << " = " << NumSub(dr1, dr2, nr1, nr2) << "/" << DenSub(dr1, dr2) << "\n";
		cout << "Multiplication: \n" << nr1 << "/" << dr1 << " * " << nr2 << "/" << dr2 << " = " << NumMult(nr1, nr2) << "/" << DenMult(dr1, dr2) << "\n";
		cout << "Division:       \n" << nr1 << "/" << dr1 << " / " << nr2 << "/" << dr2 << " = " << NumDiv(nr1, dr2) << "/" << DenDiv(nr2, dr1) << "\n";
	}
}

