/*
File: line.cpp
Description:
Author: Matthew Carlson
Email: carlsonm137773@student.vvc.edu
Date of creation: 4/12/2018
*/

#include<string>
#include<vector>

#include"line.h"

Line::Line(std::string _line, int line_number)
{
	m_linenumber = line_number;
	m_line = _line;
// remove all non letter chars 
// to lower
// 	
}

std::vector<words> Line::get_words()
{
	return m_words;
}

int get_linenum()
{
	return m_linenumber;
}
