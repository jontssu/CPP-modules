#include "BitcoinExchange.hpp"

// BitcoinExchange::BitcoinExchange() {}

bool isValidDate(const std::string& dateString) {
    std::tm time = {};
    std::istringstream ss(dateString);
    ss >> std::get_time(&time, "%Y-%m-%d");
    return !ss.fail() && std::mktime(&time) != -1;
}

int convertDateToNumeric(const std::string& dateString) {
    std::smatch match;
    std::regex dateRegex("([0-9]{4})-([0-9]{2})-([0-9]{2})");

    if (std::regex_search(dateString, match, dateRegex)) {
        try {
            int year = std::stoi(match[1]);
            int month = std::stoi(match[2]);
            int day = std::stoi(match[3]);

            return year * 10000 + month * 100 + day;
        } catch (const std::invalid_argument& e) {
            std::cerr << "Error converting numeric value from date string: " << dateString << std::endl;
            throw;
        }
    } else {
        throw std::invalid_argument("Invalid date string format.");
    }
}

BitcoinExchange::BitcoinExchange(const std::string& data, const std::string& input)
{
	std::ifstream dataFile(data);
	std::map<int, float> exchangeRates;
	std::string line;
	if (!dataFile.is_open()) {
		std::cerr << "Error: could not open data file.\n";
		return;
	}

	std::getline(dataFile, line);

	while (std::getline(dataFile, line)) {
		std::istringstream iss(line);
		std::string dateStr, rateStr;
		std::getline(iss, dateStr, ',');
		std::getline(iss, rateStr, ',');
		exchangeRates[convertDateToNumeric(dateStr)] = std::stof(rateStr);
	}
	dataFile.close();

	std::ifstream inputFile(input);
	if (!inputFile.is_open()) {
		std::cerr << "Error: could not open input file.\n";
		return;
	}

	std::getline(inputFile, line);

	while (std::getline(inputFile, line)) {
		std::istringstream iss(line);
		std::string dateStr, valueStr;
		std::getline(iss, dateStr, '|');
		std::getline(iss, valueStr, '|');
		if (valueStr.empty()) {
			std::cerr << "Error: bad input => " << line << '\n';
			continue;
		}
		float value = std::stof(valueStr);
		if (value < 0) {
			std::cerr << "Error: not a positive number.\n";
			continue;
		}
		else if (value > 1000) {
			std::cerr << "Error: too large a number.\n";
			continue;
		}
		else if (!isValidDate(dateStr)) {
			std::cerr << "Error: not a valid date.\n";
			continue;
		}

		try {
			int numericDate = convertDateToNumeric(dateStr);

			auto it = exchangeRates.upper_bound(numericDate);

			if (it == exchangeRates.begin()) {
				std::cerr << "Error: No exchange rate found for date: " << dateStr << std::endl;
				continue;
			}

			--it;

			float rate = it->second;
			std::cout << dateStr << " => " << value << " = " << value * rate << std::endl;
		} catch (const std::exception &e) {
			std::cerr << "Error: " << e.what() << std::endl;
		}
	}
	inputFile.close();
}

BitcoinExchange::~BitcoinExchange() {}