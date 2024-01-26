#pragma once

#include <iostream>
#include "FRead.h"
#include "Random.h"


class GameRule
{
public:
	GameRule();

	void generateWord();
	void enterSymbol(char symbol);
	void showWord();
	bool IsWin();

	int getAttempts();

private:
	int size;
	int attempts;
	std::string word;
	std::string letterStorage;

	bool IsGenerate();
	bool checkSymbol(const char symbol, const std::string& str);
	void strLwr();
	void strLwr(char &str);
};

