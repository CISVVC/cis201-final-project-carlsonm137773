/*
File: word.h
Description:
Author: Matthew Carlson
Email: carlsonm137773@student.vvc.edu
Date of cration: 4/12/2018
*/

#ifndef WORD_H
#define WORD_H

#include<string>
#include<vector>

class Word
{
public:
	Word();
	Word(std::string _word, int _line)
	void add_line(int _line);
	void print();
	int get_count();
private:
	std::string m_word;
	int m_count;
	std::vector<int> m_lines;
};

#endif
