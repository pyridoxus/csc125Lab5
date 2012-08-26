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
/*
 * Lab5.cpp
 *
 *  Created on: Mar 19, 2011
 *      Author: pyridoxus
 */

#include <iostream>
#include "Fraction.h"
using namespace std;

int main(void)
{
    Fraction a, b, c;
    cout << "Enter first fraction: " << endl;
    a.getFractionData();    // Get fraction from user
    cout << "Enter second fraction:" << endl;
    b.getFractionData();    // Get another fraction from user
    c = a + b;
    cout << "The sum is: ";
    c.print();
    c.reduce();
    cout << "The reduced sum is: ";
    c.print();
    return 0;
}

