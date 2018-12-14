/*
File: word.h
Description: header file for the Word class
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
	Word(std::string _word, int _line); // constructor with peramaters
	void add_line(int _line);	//adds a line numebr to the m_lines vector and m_count++
	int get_count();	//accessor function
	void print();	//outputs - m_word : m_count : m_lines[0],m_lines[1]...
	std::string get_word(); //accessor function
private:
	std::string m_word;
	int m_count;
	std::vector<int> m_lines;
};

#endif
