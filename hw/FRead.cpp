#include "FRead.h"

std::string FRead::readWord(const char* file, const int index, const int words) {
	std::ifstream fin;
	std::string str;
	fin.open(file);

	if (fin.is_open()) {
		for (int i = 0; i < words; i++)
		{
			std::getline(fin, str);
			if (i == index) {
				break;
			}
		}
	}
	else {
		std::cout << "\n\tFile not found!\n";
	}

	fin.close();
	return str;
}

