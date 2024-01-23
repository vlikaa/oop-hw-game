#pragma once

#include <iostream>

class GameRule
{
public:
	std::string& generateWord();
	bool checkSymbol(const char symbol);
	void showWord();

private:
	std::string = generateWord();
};

