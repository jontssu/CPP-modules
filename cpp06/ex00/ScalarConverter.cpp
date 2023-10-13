#include "ScalarConverter.hpp"
#include <iostream>
#include <sstream>
#include <limits>

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
	int	negative = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (negative == 0 && (str[i] == '-' || str[i] == '+')) {
			negative = 1;
			continue;
		}
		if (str[i] == '.')
			x++;
		if (str[i] == 'f' && str[i + 1] != '\0')
			return (NONVALID);
		if ((str[i] != '.' && str[i] != 'f' && !isdigit(str[i])) || x > 1)
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

void caseChar(char c) {
	std::cout << "char: '" << c << "'\n";
	std::cout << "int: " << static_cast<int>(c) << '\n';
	std::cout << "float: " << static_cast<float>(c) << '\n';
	std::cout << "double: " << static_cast<double>(c) << '\n';
}

void caseInt(int i) {
	std::cout << "char: ";
	if (i > std::numeric_limits<char>::max() || i < std::numeric_limits<char>::min())
		std::cout << "impossible\n";
	else if (!isprint(static_cast<char>(i)))
		std::cout << "Non displayable\n";
	else
		std::cout << '\'' << static_cast<char>(i) << "'\n";
	std::cout << "int: " << i << '\n';
	std::cout << "float: " << static_cast<float>(i) << '\n';
	std::cout << "double: " << static_cast<double>(i) << '\n';
}

void caseFloat(float f) {
	std::cout << "char: ";
	if (f > std::numeric_limits<char>::max() || f < std::numeric_limits<char>::min())
		std::cout << "impossible\n";
	else if (!isprint(static_cast<char>(f)))
		std::cout << "Non displayable\n";
	else
		std::cout << '\'' << static_cast<char>(f) << "'\n";
	if (f > std::numeric_limits<int>::max() || f < std::numeric_limits<int>::min())
		std::cout << "int: impossible\n";
	else
		std::cout << "int: " << static_cast<int>(f) << '\n';
	std::cout << "float: " << f << '\n';
	std::cout << "double: " << static_cast<double>(f) << '\n';
}

void caseDouble(float d) {
	std::cout << "char: ";
	if (d > std::numeric_limits<char>::max() || d < std::numeric_limits<char>::min())
		std::cout << "impossible\n";
	else if (!isprint(static_cast<char>(d)))
		std::cout << "Non displayable\n";
	else
		std::cout << '\'' << static_cast<char>(d) << "'\n";
	if (d > std::numeric_limits<int>::max() || d < std::numeric_limits<int>::min())
		std::cout << "int: impossible\n";
	else
		std::cout << "int: " << static_cast<int>(d) << '\n';
	if (d > std::numeric_limits<float>::max() || d < std::numeric_limits<float>::min())
		std::cout << "float: impossible\n";
	else
		std::cout << "float: " << static_cast<float>(d) << '\n';
	std::cout << "double: " << d << '\n';
}

void ScalarConverter::convert(std::string str){
	type t = f(str);
	std::stringstream ss;

	switch (t)
	{
		case CHAR: {
			std::cout << "It is a CHAR\n";
			caseChar(str[1]);
			break;
		}
		case INT: {
			int i = 0;
			ss << str;
			if (!(ss >> i))
				std::cout << "It is NONVALID\n";
			else {
				std::cout << "It is an INT\n";
				caseInt(i);
			}
			break;
		}
		case FLOAT: {
			float f = 0;
			ss << str.erase(str.size() - 1, 1);
			if (!(ss >> f))
				std::cout << "It is NONVALID\n";
			else {
				std::cout << "It is a FLOAT\n";
				caseFloat(f);
			}
			break;
		}
		case DOUBLE: {
			double d = 0;
			ss << str;
			if (!(ss >> d))
				std::cout << "It is NONVALID\n";
			else {
				std::cout << "It is a DOUBLE\n";
				caseDouble(d);
			}
			break;
		}
		case NONVALID: {
			std::cout << "It is NONVALID\n";
			break;
		}
	}
}