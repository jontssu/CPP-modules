#include "BitcoinExchange.hpp"

// BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(std::string const &data, std::string const &input) {
	std::ifstream inputFile;
	std::vector<std::string> inputText;
	std::string line;;
	std::regex regex_basic("[0-9]{4}-[0-9]{2}-[0-9]{2} \\| [0-9]+.?[0-9]*");
	std::regex regex_negative("[0-9]{4}-[0-9]{2}-[0-9]{2} \\| -[0-9]+.?[0-9]*");

	inputFile.open(input);
	getline(inputFile, line);
	if (line != "date | value")
		return;
	while (std::getline(inputFile, line)) {
		if (regex_match(line, regex_basic)) {
			size_t pos = line.find("|");	
			std::string tmp = line.substr(pos + 1);
			if (std::stof(tmp) > 1000)
				inputText.emplace_back("Error: too large a number.");
			else
				inputText.emplace_back(line);
		}
		else if (regex_match(line, regex_negative))
			inputText.emplace_back("Error: not a positive number.");
		else
			inputText.emplace_back("Error: bad input => " + line);
	}

	(void)data;
	for (auto x : inputText) {
		std::cout << x << '\n';
	}
	// std::ifstream dataFile;
	// std::vector<std::string> dataText;
	
	// dataFile.open(data);
	// while (std::getline(dataFile, line)) {
	// 	dataText.emplace_back(line);
	// }

	// for (auto it = inputText.begin() ; it != inputText.end(); it++) {

	// }
}

// BitcoinExchange::BitcoinExchange(BitcoinExchange const &other) {

// }

// BitcoinExchange& BitcoinExchange::operator=(BitcoinExchange const &other) {
// 	if (this != &other) {

// 	}
// 	return (*this);
// }

BitcoinExchange::~BitcoinExchange() {}