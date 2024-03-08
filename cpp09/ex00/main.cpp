#include "BitcoinExchange.hpp"

int main(int argc, char **argv) {
	(void)argc;

	BitcoinExchange btc = BitcoinExchange("data.csv", argv[1]);
	// Error: could not open file.
	return (0);
}