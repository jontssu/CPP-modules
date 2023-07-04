#include <iostream>
#include <string>
#include <fstream>

std::string replace(std::string line, std::string str1, std::string str2);

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cerr << "Invalid amount of arguments\n" << std::endl;
		return (1);
	}
	std::ifstream inputFile(argv[1]);
	if (!inputFile) {
		std::cerr << "Couldn't open file 1\n" << std::endl;
	}
	std::ofstream outputFile((std::string(argv[1]) + ".replace").c_str());
	if (!outputFile) {
		std::cerr << "Couldn't open file 2\n" << std::endl;
	}

	if (inputFile && outputFile) {
		while (!inputFile.eof()) {
			std::string line;
			getline(inputFile, line);
			line = replace(line, argv[2], argv[3]);
			outputFile << line << std::endl;
		}
		std::cout << "Successfully written to a new file" << std::endl;
	} else {
		std::cerr << "Failed to open files" << std::endl;
	}
	return (0);
}