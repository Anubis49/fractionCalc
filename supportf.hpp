#ifndef STRING
#define STRING
#include <string>
#endif

void expandStr(std::string *& str, int & size);
std::string * str_spiltStr(std::string str_input, int & size);
int CharToInt(char ch);
int StringToInt(std::string str);