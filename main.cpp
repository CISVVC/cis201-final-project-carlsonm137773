/*
File: main.cpp
Description: Lists all the words found in a text file
	outputs a list of words with the number of times each word was found and the line numbers
Author: Matthew Carlson
Email: carlsonm137773@student.vvc.edu
Date of creation: 4/12/2018
*/

#include "concordance.h"

std::string get_string(std::string prompt);

int main()
{
	Concordance con(get_string("Please eneter the file name: "));
	con.parse();
	con.print();

	return 0;
}

/*
Prompts the user for a string
@peram prompt the string output to the user
@return the string input by the user
*/
std::string get_string(std::string prompt)
{
	std::string s;
	std::cout << prompt;
	std::cin >> s;

	return s;
}
