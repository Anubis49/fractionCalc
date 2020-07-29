#include "fractionBase.hpp"

fraction addFraction (fraction a, fraction b){
	int DenominatorA;
	int DenominatorB;
	int Numerator;

	fraction c;

	DenominatorA = a.denominator * b.numerator;
	DenominatorB = a.numerator * b.denominator;
	Numerator = a.numerator * b.numerator;

	c.denominator = DenominatorA + DenominatorB;
	c.numerator = Numerator;

	return c;
}

fraction subFraction (fraction a, fraction b){
	int DenominatorA;
	int DenominatorB;
	int Numerator;

	fraction c;

	DenominatorA = a.denominator * b.numerator;
	DenominatorB = a.numerator * b.denominator;
	Numerator = a.numerator * b.numerator;

	c.denominator = DenominatorA - DenominatorB;
	c.numerator = Numerator;

	return c;
}

fraction multFraction(fraction a, fraction b){
	fraction c;

	c.denominator = a.denominator * b.denominator;
	c.numerator = a.numerator * b.numerator;

	return c;
}

fraction divFraction(fraction a, fraction b){
	fraction tempA;
	fraction tempB;

	fraction c;

	tempA.denominator = a.numerator;
	tempA.numerator = a.denominator;

	tempB.denominator = b.numerator;
	tempB.numerator = b.denominator;

	c.denominator = tempA.denominator * tempB.denominator;
	c.numerator = tempA.numerator * tempB.numerator;

	return c;
}