/*
File: line.h
Description:
Author: Matthew Carlson
Email: carlsonm137773@student.vvc.edu
Date of creation: 4/12/2018
*/

#ifndef LINE_H
#define LINE_H

#include<string>
#include<vector>

class Line
{
public:
	Line(std::string _line, int line_number);
	std::vector<words> get_words();
	int get_linenum();
private:
	std::string m_line;
	int m_linenumber;
	std::vector<string> m_words;
};

#endif
