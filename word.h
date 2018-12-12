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
#include<iostream>

class Word
{
public:
	Word();
	Word(std::string _word, int _line);
	void add_line(int _line);
	int get_count();
	void print();
	std::string get_word();
private:
	std::string m_word;
	int m_count;
	std::vector<int> m_lines;
};

#endif
