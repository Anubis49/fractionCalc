#include "supportf.hpp"
#include <sstream>

void expandStr(std::string *& str, int & size){
	std::string * str_temp = new std::string [size + 1];

	for (int i = 0; i < size; ++i)
	{
		str_temp[i] = str[i];		
	}

	delete[] str;
	str = new std::string [size+1];

	for (int i = 0; i < size; ++i)
	{
		str[i] = str_temp[i];
	}
	delete[] str_temp;
	str_temp = NULL;
	size ++;
}

std::string * str_spiltStr(std::string str_input, int & size){
	std::stringstream strs(str_input);
	int StrSize = 1;
	std::string * str = new std::string [StrSize];

	int x = 0;
	while(getline(strs, str[x], ' ')){
		expandStr(str, StrSize);
		x++;
	}

	size = StrSize;
	return str;
}


int CharToInt(char ch){
	int MyInt;
	switch (ch)
	{
		case '0':
		MyInt = 0;
		break;

		case '1':
		MyInt = 1;
		break;

		case '2':
		MyInt = 2;
		break;

		case '3':
		MyInt = 3;
		break;

		case '4':
		MyInt = 4;
		break;

		case '5':
		MyInt = 5;
		break;

		case '6':
		MyInt = 6;
		break;

		case '7':
		MyInt = 7;
		break;

		case '8':
		MyInt = 8;
		break;

		case '9':
		MyInt = 9;
		break;
	}
	return MyInt;
}


int StringToInt(std::string str){
	int MyInt = 0;
	int Multiplikator = 1;
	for (int i = str.length() -1; i >= 0; --i)
	{
		MyInt += Multiplikator * CharToInt(str[i]);
		Multiplikator *= 10;
	}
	return MyInt;
}