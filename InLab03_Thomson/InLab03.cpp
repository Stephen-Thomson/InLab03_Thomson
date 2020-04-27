/**********************************************************************************************************************
*
* Author:		Stephen Thomson
* Filename:		InLab03.cpp
* Date Created:	4/26/2020
*
* Assignment InLab 03: Create and up to date String Class
*
* Overview:
*	This program will test the functionality of the String class.
*
* Input:
*	Noen
*
* Output:
*	Strings and Messages
*
**********************************************************************************************************************/
#define CRTBDG_MAP_ALLOC
#include <iostream>
using std::cout;
using std::endl;
#include <new>
using std::bad_alloc;
#include "String.h"
#include <crtdbg.h>



int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	
	String string1("Hello Cruel World");
	String string2("Goodnight Earth");
	String string3("Good Morning Oregon");
	cout << "string1: " << string1 << endl;
	cout << "string2: " << string2 << endl;
	cout << "string3: " << string3 << endl;
	
	String string4 = string2;
	cout << "Equal Operator" << endl;
	cout << string4 << "\n" << endl;

	cout << "Displaying in Order, string1 ==,!=,<,<=,>,>= string2: " << endl;
	if (string1 == string2)
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}
	if (string1 != string2)
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}
	if (string1 < string2)
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}
	if (string1 <= string2)
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}
	if (string1 > string2)
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}
	if (string1 >= string2)
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}
	cout << endl;

	cout << "Add string3 to string1: " << endl;
	string1 += string3;
	cout << string1 << "\n" << endl;

	cout << "Decrement string2: " << endl;
	--string2;
	cout << string2 << "\n" << endl;
	cout << "Increment string2: " << endl;
	++string2;
	cout << string2 << "\n" << endl;

	cout << "Display a character from string1, then try an element out of bounds: " << endl;
	try
	{
		cout << string1[7] << endl;
		cout << string1[100] << "\n" << endl;
	}
	catch (bad_alloc Exception)
	{
		cout << "Error: Out of Bounds" << endl;
	}

	cout << "The length of the strings 1 - 4: " << endl;
	cout << string1.GetLength() << endl;
	cout << string2.GetLength() << endl;
	cout << string3.GetLength() << endl;
	cout << string4.GetLength() << endl;


}