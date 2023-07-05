#include <iostream>
#include <string>
#include <fstream>

std::string replace(std::string line, std::string str1, std::string str2) {
	
	return (line);
}

int main(int argc, char **argv) {
	(void)argc;
	std::ifstream inputFile(argv[1]);
	std::ofstream outputFile((std::string(argv[1]) + ".replace").c_str());

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