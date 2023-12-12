

#include <iostream>
#include "functions.h"

using namespace std;

void game1();



int main()
{



	game1();
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


		else if (isWin(word, userWord)) {
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