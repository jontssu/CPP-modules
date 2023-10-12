#include "ScalarConverter.hpp"
#include <iostream>

enum type
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	NONVALID
};

type	f(std::string str)
{
	if (str[0] == '\'' && isprint(str[1]) && str[2] == '\'' && str[3] == '\0')
		return (CHAR);
	int x = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == 'f' && str[i + 1] != '\0')
			return (NONVALID);
		else if (str[i] == '.')
			x++;
		else if (!isdigit(str[i]))
			return (NONVALID);
	}
	if (str.back() == 'f') {
		if (x == 1)
			return (FLOAT);
		return (NONVALID);
	}
	else if (x == 1)
		return (DOUBLE);
	return (INT);
}

void ScalarConverter::convert(std::string str){
	type t = f(str);
	switch (t)
	{
		case CHAR: {
			std::cout << "It is a CHAR\n";
			break;
		}
		case INT: {
			std::cout << "It is an INT";
			break;
		}
		case FLOAT: {
			std::cout << "It is a FLOAT";
			break;
		}
		case DOUBLE: {
			std::cout << "It is a DOUBLE";
			break;
		}
		case NONVALID: {
			std::cout << "It is NONVALID";
			break;
		}
	}
}