

#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include "functions.h"
#include "GameRule.h"

using namespace std;

void game1();

void game2();

int main()
{

	/*ofstream fout;
	fout.open("file.txt", std::ios::app);

	if (fout.is_open()) {
		fout << "man\n";
	}

	fout.close();*/


	game2();

}

void game1() {
	string word = "Apple",
		userWord;
	int i{};
	while (true) {
		cout << "Enter word: ";
		cin >> userWord;
		system("cls");
		
		if (userWord.empty() || userWord[0] == '0') {
			cout << "\n\tExit . .\n";
			break;
		}

		else if (!word.compare(userWord)) {
			cout << "\n\tYou win\n";
			break;
		}

		else if (i == 0) {
			cout << "\tThis is a fruit\n";
		}
		else if (i == 1) {
			cout << "\tThis fruit is green\n";
		}
		else if (i > 1) {
			cout << "\tThere will be no more hints, just enter Apple\n";
		}

		i++;
	}



}

void game2() {


	GameRule game;
	char symbol;

	game.generateWord();
	
	while (true)
	{
		if (game.IsWin()) {
			cout << "\n\tYou won\n";
			break;
		}
		system("cls");
		game.showWord();
		cout << "\nEnter symbol: ";
		symbol = _getch();
		game.enterSymbol(symbol);

	}
}