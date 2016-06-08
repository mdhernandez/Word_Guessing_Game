//Author: Michael Hernandez
//Date Last Modified: 6/8/2016

#include<string>
#include<iostream>
#include<vector>
#include<fstream>
#include<ctime>
#include<algorithm>

int stringComparison(std::string, std::string);//compares two strings of the same length and returns the number of letters they have in common
void getWords(std::vector<std::string>& listOfWords, std::ifstream& ifs, int length);//populates a vector of strings with random words of a specified length from an input file
void guessingGame(std::ifstream&, std::vector<std::string>&);//main function used for the guessing game