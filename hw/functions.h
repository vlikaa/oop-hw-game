#pragma once

#include <iostream>

bool isWin(std::string searchWord, std::string word) {
	//_strlwr_s(searchWord, size(searchWord));
	return searchWord == word ? true : false;
}

