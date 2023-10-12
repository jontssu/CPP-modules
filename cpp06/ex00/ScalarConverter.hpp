#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <string>

class ScalarConverter {
	public:
		static void convert(std::string str);
	private:
		ScalarConverter();
		ScalarConverter& operator=(ScalarConverter const &ref);
		ScalarConverter(ScalarConverter const &ref);
		~ScalarConverter();
};

#endif