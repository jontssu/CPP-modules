#include "BitcoinExchange.hpp"

int main(int argc, char **argv) {
	BitcoinExchange btc = BitcoinExchange("data.csv", argv[1]);

	return (0);
}