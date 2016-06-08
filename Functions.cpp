//Author: Michael Hernandez
//Date Last Modified: 6/8/2016

#include"Functions.h"

int stringComparison(std::string s1, std::string s2) {
	int similarTotal = 0;
	if (s1.length() != s2.length()) {
		return -1;
	}
	else {
		int max = s1.length();
		for (int i = 0; i < max; i++) {
			if (s1[i] == s2[i])
				similarTotal++;
		}
	}
	return similarTotal;
}

void getWords(std::vector<std::string>& listOfWords, std::ifstream& ifs, int length) {
	std::string theWord = "";
	while (ifs >> theWord) {
		if (theWord.length() == length) {
			listOfWords.push_back(theWord);
		}
	}
	srand(time(nullptr));
	random_shuffle(begin(listOfWords), end(listOfWords));
}

void guessingGame(std::ifstream& inf, std::vector<std::string>& vecWords) {
	int difficulty;
	std::cout << "Difficulty(1-5)?: ";
	std::cin >> difficulty;
	std::cout << std::endl;
	int stringLength;
	int wordCount;
	int numOfGuesses = 4;
	int numOfCorrect = 0;
	std::string password;
	std::string guess;
	switch (difficulty) {
	case 1: {
		stringLength = 4;
		wordCount = 6;
		std::string wordList[6];

		getWords(vecWords, inf, stringLength);

		int randChoice = rand() % 6;

		for (int j = 0; j < 6; j++) {
			wordList[j] = vecWords[j];
			std::cout << wordList[j] << std::endl;
		}

		password = wordList[randChoice];

		while (numOfCorrect != 4 && numOfGuesses > 0) {
			std::cout << "Guess(" << numOfGuesses << " left)?: ";
			std::cin >> guess;
			std::cout << std::endl;

			numOfCorrect = stringComparison(guess, password);
			std::cout << numOfCorrect << "/4 correct" << std::endl;
			if (numOfCorrect == 4) {
				std::cout << "You Win!" << std::endl;
				break;
			}

			numOfGuesses--;
			if (numOfGuesses == 0) {
				std::cout << "Sorry. You lose." << std::endl;
			}
		}
		break;
	}
	case 2: {
		stringLength = 6;
		wordCount = 8;
		std::string wordList[8];

		getWords(vecWords, inf, stringLength);

		int randChoice = rand() % 8;

		for (int j = 0; j < 8; j++) {
			wordList[j] = vecWords[j];
			std::cout << wordList[j] << std::endl;
		}

		password = wordList[randChoice];

		while (numOfCorrect != 6 && numOfGuesses > 0) {
			std::cout << "Guess(" << numOfGuesses << " left)?: ";
			std::cin >> guess;
			std::cout << std::endl;

			numOfCorrect = stringComparison(guess, password);
			std::cout << numOfCorrect << "/6 correct" << std::endl;
			if (numOfCorrect == 6) {
				std::cout << "You Win!" << std::endl;
				break;
			}

			numOfGuesses--;
			if (numOfGuesses == 0) {
				std::cout << "Sorry. You lose." << std::endl;
			}
		}
		break;
	}
	case 3: {
		stringLength = 8;
		wordCount = 10;
		std::string wordList[10];
		int randChoice = rand() % 10;

		getWords(vecWords, inf, stringLength);

		for (int j = 0; j < 10; j++) {
			wordList[j] = vecWords[j];
			std::cout << wordList[j] << std::endl;
		}

		password = wordList[randChoice];

		while (numOfCorrect != 8 && numOfGuesses > 0) {
			std::cout << "Guess(" << numOfGuesses << " left)?: ";
			std::cin >> guess;
			std::cout << std::endl;

			numOfCorrect = stringComparison(guess, password);
			std::cout << numOfCorrect << "/8 correct" << std::endl;
			if (numOfCorrect == 8) {
				std::cout << "You Win!" << std::endl;
				break;
			}

			numOfGuesses--;
			if (numOfGuesses == 0) {
				std::cout << "Sorry. You lose." << std::endl;
			}
		}
		break;
	}
	case 4: {
		stringLength = 12;
		wordCount = 12;
		std::string wordList[12];
		int randChoice = rand() % 12;

		getWords(vecWords, inf, stringLength);

		for (int j = 0; j < 12; j++) {
			wordList[j] = vecWords[j];
			std::cout << wordList[j] << std::endl;
		}

		password = wordList[randChoice];

		while (numOfGuesses > 0) {
			std::cout << "Guess(" << numOfGuesses << " left)?: ";
			std::cin >> guess;
			std::cout << std::endl;

			numOfCorrect = stringComparison(guess, password);
			std::cout << numOfCorrect << "/12 correct" << std::endl;
			if (numOfCorrect == 12) {
				std::cout << "You Win!" << std::endl;
				break;
			}

			numOfGuesses--;
			if (numOfGuesses == 0) {
				std::cout << "Sorry. You lose." << std::endl;
			}
		}
		break;
	}
	case 5: {
		stringLength = 15;
		wordCount = 12;
		std::string wordList[12];
		int randChoice = rand() % 12;

		getWords(vecWords, inf, stringLength);

		for (int j = 0; j < 12; j++) {
			wordList[j] = vecWords[j];
			std::cout << wordList[j] << std::endl;
		}

		password = wordList[randChoice];

		while (numOfGuesses > 0) {
			std::cout << "Guess(" << numOfGuesses << " left)?: ";
			std::cin >> guess;
			std::cout << std::endl;

			numOfCorrect = stringComparison(guess, password);
			std::cout << numOfCorrect << "/15 correct" << std::endl;
			if (numOfCorrect == 15) {
				std::cout << "You Win!" << std::endl;
				break;
			}
			numOfGuesses--;
			if (numOfGuesses == 0) {
				std::cout << "Sorry. You lose." << std::endl;
			}
		}
		break;
	}
	default:
		std::cout << "Invalid Difficulty Setting." << std::endl;
	}
}