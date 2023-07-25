#include <iostream>
#include <string>
#include <fstream>

void replace(std::string &line, const std::string &str1, const std::string &str2) {
	size_t pos;

	pos = line.find(str1);
	while (pos != std::string::npos) {
		line.erase(pos, str1.length());
		line.insert(pos, str2);
		pos = line.find(str1);
	}	
}

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cerr << "Invalid amount of arguments" << std::endl;
		return (1);
	}
	std::ifstream inputFile(argv[1]);
	if (!inputFile) {
		std::cerr << "Couldn't open file 1" << std::endl;
	}
	std::ofstream outputFile((std::string(argv[1]) + ".replace").c_str());
	if (!outputFile) {
		std::cerr << "Couldn't open file 2" << std::endl;
	}
	if (inputFile && outputFile) {
		std::string line;
		while (std::getline(inputFile, line)) {
			replace(line, argv[2], argv[3]);
			outputFile << line << std::endl;
		}
		std::cout << "Successfully written to a new file" << std::endl;
	} else {
		std::cerr << "Failed to open files" << std::endl;
	}
	return (0);
}