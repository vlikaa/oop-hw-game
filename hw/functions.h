#pragma once

#include <iostream>

//void strLwr( std::string aString) {
//	for (int i = 0; i < aString.size(); i++) {
//		if (int(aString[i]) >= 65 && int(aString[i]) <= 90) {
//			int(aString[i]) += 32;
//		}
//	}
//}

bool isWin(std::string searchWord, std::string word) {


	return searchWord.compare(word);
}

