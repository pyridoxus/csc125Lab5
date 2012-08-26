//This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program.  If not, see <http://www.gnu.org/licenses/>.
#include <iostream>
#include "Fraction.h"
using namespace std;

int Fraction::reduce(void)
{
    int n, modnum, moddenom, common;
    int loop;   // Flag to continue on the same factor
    common = 1; // Set up the least common multiple
    for(n = 2; n <= denom / 2; n++)
    {
        do
        {
            modnum = num % n;        // Find if nicely divisible
            moddenom = denom % n;
            if((modnum == 0) && (moddenom == 0))
            {
                common *= n; // "Store" the factor
                num /= n; // "Remove" the factor from the numerator
                denom /= n;  // "Remove" the factor from the denominator
                loop = -1; // Repeat on this factor again
            }
            else loop = 0; // Don't repeat on this factor again
        } while(loop);
    }
    return common;	// Return the greatest common factor, in case it's needed.
}

void Fraction::getFractionData(void)
{
    cout << "Enter numerator  : ";
    cin >> num;   // Get the numerator from the user
    cout << "Enter denominator: ";
    cin >> denom;   // Get the denominator from the user
}

Fraction operator +(Fraction &a, Fraction &b) // Add two fractions
{
    Fraction sum;
    sum.setNumerator((a.getNumerator() * b.getDenominator()) + \
    		(b.getNumerator() * a.getDenominator()));
    sum.setDenominator(a.getDenominator() * b.getDenominator());
    return sum;
}

void Fraction::print(void)
{
    cout << num << "/" << denom << endl;
}

void Fraction::setNumerator(int num)			// Set the numerator
{
	this->num = num;
	return;
}

void Fraction::setDenominator(int denom)	// Set the denominator
{
	this->denom = denom;
	return;
}

int Fraction::getNumerator(void)					// Get the numerator
{
	return this->num;
}

int Fraction::getDenominator(void)				// Get the denominator
{
	return this->denom;
}
