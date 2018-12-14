/*
File: concordance.h
Description: header file for the Concordance class
Author: Matthew Carlson
Email: carlsonm137773@student.vvc.edu
Date of creation: 10/12/2018
*/

#ifndef CONCORDANCE_H
#define CONCORDANCE_H

#include<string>
#include<iostream>
#include<vector>
#include<fstream>
#include<cctype>
#include<locale>

#include"word.h"

class Concordance
{
public:
	Concordance(std::string filename);
	void parse();
	std::string next_word(std::ifstream &input);
	bool is_whitespace(char c);
	void eat_whitespace(std::ifstream &input);
	void print();
	int find_word(std::string word);
	std::string remove_punctuation(std::string word);
	std::string make_lower(std::string word);
private:
	std::vector<Word> m_words;
	std::string m_filename;
	int m_linenumber;
};

#endif
