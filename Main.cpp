//Author: Michael Hernandez
//Date Last Modified: 6/8/2016

#include "Functions.h"

int main() {
	std::ifstream inFile;

	inFile.open("enable1.txt");

	if (inFile.fail()) {
		return 1;
	}

	std::vector<std::string> wordList;

	guessingGame(inFile, wordList);

	inFile.close();

	return 0;
}