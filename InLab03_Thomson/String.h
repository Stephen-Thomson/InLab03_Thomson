#pragma once
/***********************************************************************************************************************
*
* Class: String
*
* Purpose: Assigns a string and allows manipulation of the string.
*
* Manager Functions:
*	Default Constructor
*	String(char) Constructor
*	Const char * argument Constructor
*	Copy Constructor
*	Move Constructor
*	Destructor
*	Overloaded Copy Assignment
*	Overloaded Move Assignment
*	Comparison Operators
*	Overloaded << Operator
*	Overloaded Operators
*	Operator Conversion
*	
* Methods:
*	GetLength
*	GetString
*	
************************************************************************************************************************/
#include <iostream>
using std::ostream;
using std::istream;

class String
{
	public:
		String();
		String(char ch);
		String(const char * String);
		String(const String& copy);
		String(String&& copy);
		~String();
		String& operator=(const String& rhs);
		String& operator=(String&& rhs);
		bool operator ==(const String& Object) const;
		bool operator ==(const char * String) const;
		bool operator !=(const char* String) const;
		bool operator !=(const String& Object) const;
		bool operator <(const char* String) const;
		bool operator <(const String& Object) const;
		bool operator <=(const char* String) const;
		bool operator <=(const String& Object) const;
		bool operator >(const char* String) const;
		bool operator >(const String& Object) const;
		bool operator >=(const String& Object) const;
		bool operator >=(const char* String) const;
		friend ostream& operator << (ostream& out, const String& rhs);
		friend istream& operator >> (istream& in, const String& rhs);
		String operator +(const String& rhs);
		String operator +=(const String& rhs);
		String& operator ++();
		String& operator ++(int);
		String& operator --();
		String& operator --(int);
		char operator [](int i);
		operator char* () const;
		int GetLength();
		const char * GetString() const;

	private:
		char * m_string;
		int m_length;
};