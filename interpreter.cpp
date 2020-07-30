#include "interpreter.hpp"

#include <iostream>
using namespace std;

fraction strToFraction(std::string str){
	fraction myfraction;
	std::string str_denominator = "";
	std::string str_numerator = "";
	for (int i = 0; i < str.length(); ++i)
	{
		if (str[i] == '-')
		{
			for (int j = 0; j < i; ++j)
			{
				str_denominator += str[j];
			}

			for (int j = i+1; j < str.length(); ++j)
			{
				str_numerator += str[j];
			}
		}
	}
	myfraction.denominator = StringToInt(str_denominator);
	myfraction.numerator = StringToInt(str_numerator);
	return myfraction;
}