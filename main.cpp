/*
File: main.cpp
Description:
Author: Matthew Carlson
Email: carlsonm137773@student.vvc.edu
Date of creation: 4/12/2018
*/
#include<iostream>
#include<vector>
#include<string>
#include<fstream>

#include"word.h"

std::string get_string(std::string prompt);

std::string read(std::istream &is);


int main()
{
   return 0;
}

std::string get_string(std::string prompt)
{
	std::string in;
	std::cout << prompt;
	cin >> in;

	return in;
}

std::string read(std::istream &is)
{
	std::string _line;

	std::get_line(is, _line);

	return _line;
}

std::vector<Word> con(_file)
{
	std::vector<Word> words;

	std::ifstream input(_file);

	if(input.fail())
	{
		std::cerr << "File cannot be read" << std::endl;
		exit(1);
	}
	int count 0;
	while(1)
	{
		count ++;

		Line _line;
		_line = Line(read(input), count);

		if(input.eof())
			break;	
		std::vector<string> = _line.get_words();
		for (int i = 0; i < _line; i++)
		{
			// check if words have been found if so add to the Word for that one if not words.push_back(Word(_line[i]), _line.get_linenum() )
		}
	}
}
