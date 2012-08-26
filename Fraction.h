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
#ifndef FRACTION_H_
#define FRACTION_H_

class Fraction
{
  private:
		int num;
		int denom;
  public:
    Fraction() { num = 0; denom = 1; }
    friend Fraction operator +(Fraction &a, Fraction &b); // Add the two fractions
    void print(void);               // Print this fraction
    int reduce(void);               // Reduce this fraction
    void getFractionData(void);     // Get numerator and denominator from user
    void setNumerator(int num);			// Set the numerator
    void setDenominator(int denom);	// Set the denominator
    int getNumerator(void);					// Get the numerator
    int getDenominator(void);				// Get the denominator
};

#endif
