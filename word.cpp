/*
File: word.cpp
Description:
Author: Matthew Carlson
Email: Carlsonm137773@student.vvc.edu
Date of creation: 4/12/2018
*/

#include<string>
#include<vector>
#include<iostream>

#include"word.h"

Word::Word()
{
	m_count = 0;
}

Word::Word(std::string _word, int _line)
{
	m_word = _word;
	m_lines.push_back(_line);

	count = 1;
}

void Word::add_line(int _line)
{
	m_lines.push_back(_line);

	count++;
}

int Word::get_count()
{
	return m_count;
}

void Word::print()
{

	std::cout << m_word << " : " << m_count << " : ";
	for(int i=0; i < m_lines.size(); i++)
	{
		if (i > 0)
		{
			std::cout << ", "
		}
		std::cout << m_lines[i];
	}
}
