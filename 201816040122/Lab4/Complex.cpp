
// Lab 4: Complex.cpp
// Member-function definitions for class Complex.
#include <iostream>
using namespace std;

#include "Complex.h"

Complex::Complex( double realPart, double imaginaryPart )
{
   setComplexNumber( realPart, imaginaryPart );
} // end Complex constructor

Complex Complex::add( const Complex &right )
{
   realPart+=right.realPart;
   imaginaryPart+=right.imaginaryPart;
   return *this;
} // end function add

Complex Complex::subtract( const Complex &right )
{
   realPart-=right.realPart;
   imaginaryPart-=right.imaginaryPart;
   return *this;
} // end function subtract

void Complex::printComplex()
{
   cout << '(' << realPart << ", " << imaginaryPart << ')';
} // end function printComplex

void Complex::setComplexNumber( double rp, double ip )
{
   realPart = rp;
   imaginaryPart = ip;
} // end function setComplexNumber
