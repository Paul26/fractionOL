#include <iostream>
#include "fraction.h"

using namespace std;

fraction::fraction(int n, int d)
	: numerator(n), denominator(d)
{
	int common = gcd(numerator, denominator);
	numerator /= common;
	denominator /= common;
}


fraction operator+(fraction f1, fraction f2)
{
	int num = (f1.numerator * f2.denominator) + (f1.denominator * f2.numerator);
	int den = (f1.denominator * f2.denominator);
	
	return fraction(num, den);
}


// Subtraction
fraction operator-(fraction f1, fraction f2)
{
	int num = (f1.numerator * f2.denominator) - (f1.denominator * f2.numerator);
	int den = (f1.denominator * f2.denominator);

	return fraction(num, den);
}


fraction operator*(fraction f1, fraction f2)
{
	int num = (f1.numerator * f2.numerator);
	int den = (f1.denominator * f2.denominator);

	return fraction(num, den);
}


fraction operator/(fraction f1, fraction f2)
{
	int num = (f1.numerator * f2.denominator);
	int den = (f1.denominator * f2.numerator);

	return fraction(num, den);
}



// Print
ostream& operator<<(ostream& out, fraction& f)
{
	out << endl << f.numerator << "/" << f.denominator << endl;

	return out;
}


// Read input
istream& operator>>(istream& in, fraction& f)
{
	cout << "Please enter a numerator: " << endl;
	cin >> f.numerator;

	cout << "Please enter a denominator: " << endl;
	cin >> f.denominator;

	return in;
}





// Euclid's Algorithm for finding the greatest common divisor
int gcd(int u, int v)
{
	u = (u < 0) ? -u : u;  // make u non-negative
	v = (v < 0) ? -v : v;  // make v non-negative

	while (u > 0)
	{
		if (u < v)
		{
			int t = u;	// swap u and v
			u = v;
			v = t;
		}

		u -= v;
	}

	return v;  // the GCD of u and v
}