#include "GameRule.h"

GameRule::GameRule()
	: size(), attempts() {}

void GameRule::generateWord() {
	FRead fin;
	Random rand;
	


	word = fin.readWord("wordLibrary.txt", 3, 1);
	size = word.size();
}

void GameRule::enterSymbol(const char symbol) {
	if (IsGenerate()) {
		if (!checkSymbol(symbol, letterStorage)) {
			letterStorage += symbol;
			++attempts;
			return;
		}

		system("cls");
		std::cout << "\n\tSymbol '" << symbol 
			<< "' has already been entered,\n\ttry another letter.\n\n";
		system("pause");
	}
}

bool GameRule::checkSymbol(const char symbol, const std::string& str) {
	return str.find(symbol) == -1 ? false : true;
}

void GameRule::showWord() {
	if (IsGenerate()) {
		for (int i = 0; i < word.size(); i++) {
			if (checkSymbol(word[i], letterStorage)) {
				std::cout << word[i];
				continue;
			}
			std::cout << '*';
		}
	}
}

bool GameRule::IsWin() {
	if (IsGenerate()) {
		for (int i = 0; i < word.size(); i++) {
			if (!checkSymbol(word[i], letterStorage))
				return false;
		}
		return true;
	}
}


bool GameRule::IsGenerate() {
	if (word.empty()) {
		std::cout << "\n\tPlease generate a word\n";
		return false;
	}
	return true;
}
