/*
File: main.cpp
Description:
Author: Matthew Carlson
Email: carlsonm137773@student.vvc.edu
Date of creation: 4/12/2018
*/

#include "concordance.h"


int main()
{
	Concordance con("alice.txt");
	con.parse();
	con.print();
}
