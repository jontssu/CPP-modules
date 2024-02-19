#ifndef BITCOIN_EXCHANGE_HPP
# define BITCOIN_EXCHANGE_HPP

#include <iostream>
#include <fstream>

class BitcoinExchange {

	public:
	// BitcoinExchange();
	BitcoinExchange(std::string const &data, std::string const &input);
	BitcoinExchange(BitcoinExchange const &other);
	BitcoinExchange& operator=(BitcoinExchange const &other);
	~BitcoinExchange();

	private:
	std::FILE* _datafile;
	std::FILE* _inputfile;
};

#endif