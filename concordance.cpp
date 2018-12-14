/*
File: concordance.cpp
Description: creates a concordance
Author: Matthew Carlson
Email: carlsonm137773@student.vvc.edu
Date of creation: 10/12/2018
*/

#include"concordance.h"

Concordance::Concordance(std::string filename)
{
	m_filename = filename;
	m_linenumber = 1;
}

void Concordance::parse()
{
	std::ifstream file(m_filename.c_str());

	while(!file.eof())
	{
		std::string word = next_word(file);
		word = remove_punctuation(word);
		word = make_lower(word);
		int checkword = find_word(word);
		if(!(checkword == -1))
		{
			m_words[checkword].add_line(m_linenumber);	
		}
		else
		{
			m_words.push_back(Word(word, m_linenumber));
		}

	}
}

bool Concordance::is_whitespace(char c)
{
	if(c == '\n')
	{
		m_linenumber ++;
	}
	return (c == ' ' || c == '\n' || c == '\t');
}

void Concordance::eat_whitespace(std::ifstream& input)
{
	for(;;)
	{
		char c;
		input.get(c);
		if(input.eof())
			break;
		if(!is_whitespace(c))
		{
			input.putback(c);
			break;
		}
	}
}

std::string Concordance::next_word(std::ifstream& input)
{
	std::string word;
	for(;;)
	{
		char c;
		input.get(c);
		if(input.eof())
			break;
		if(!is_whitespace(c))
		{
			word += c;
		}
		else
		{
			eat_whitespace(input);
			break;
		}
	}
	return word;
}

void Concordance::print()
{
	for(int i=0; i < m_words.size(); i++)
	{
		m_words[i].print();
	}
}

int Concordance::find_word(std::string word)
{
	for(int i = 0; i < m_words.size(); i++)
	{
		if(m_words[i].get_word() == word)
		{
			return i;
		}
	}
	return -1;
}

std::string Concordance::remove_punctuation(std::string word)
{
	for(int i = 0, size = word.length(); i < size; i++)
	{
		if(ispunct(word[i]))
		{
			word.erase(i--, 1);
			size = word.size();
		}
	}
	return word;
}

std::string Concordance::make_lower(std::string word)
{	
	std::string _word;
	std::locale loc;
	for(int i = 0; i < word.length(); i++)
	{
		_word = _word += std::tolower(word[i], loc);
	}
	return _word;
}
