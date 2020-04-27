#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <cctype>
#include <iostream>
using std::cout;
using std::endl;
#include <new>
using std::bad_alloc;
#include "String.h"


/********************************************************************************************************************
* Purpose: Default Constructor
*
* Precondition: None
*
*
* Postcondition:
*	Creates default String;
*
********************************************************************************************************************/
String::String() : m_string(nullptr), m_length(0)
{


}


/********************************************************************************************************************
* Purpose: Single Character Constructor
*
* Precondition:
*	Character
*
* Postcondition:
*	Creates single character String.
*
********************************************************************************************************************/
String::String(char ch) : m_string(nullptr)
{
	m_string = new char[2];
	m_string[0] = ch;
	m_string[1] = '\0';
	m_length = 1;

}


/********************************************************************************************************************
* Purpose: Single Arugment Constructor
*
* Precondition:
*	String
*
* Postcondition:
*	Creates String with argument.
*
********************************************************************************************************************/
String::String(const char* String) : m_string(nullptr), m_length(0)
{
	if (String != nullptr)
	{
		try
		{
			m_string = new char[strlen(String) + 1];
		}
		catch (bad_alloc Exception)
		{
			throw;
		}
		strcpy_s(m_string, strlen(String) + 1, String);
		m_length = strlen(m_string);

	}

}


/********************************************************************************************************************
* Purpose: Copy Constructor
*
* Precondition:
*	String
*
* Postcondition:
*	Creates a copy of the String.
*
********************************************************************************************************************/
String::String(const String& copy) : m_string(nullptr), m_length(0)
{
	if (copy.m_string != nullptr)
	{
		try
		{
			m_string = new char[strlen(copy.m_string) + 1];
		}
		catch (bad_alloc Exception)
		{
			throw;
		}
		strcpy_s(m_string, strlen(copy.m_string) + 1, copy.m_string);
		m_length = strlen(m_string);

	}

}


/********************************************************************************************************************
* Purpose: Move Copy
*
* Precondition:
*	String
*
* Postcondition:
*	Redirects Resources.
*
********************************************************************************************************************/
String::String(String&& copy)
{
	m_string = copy.m_string;
	m_length = copy.m_length;
	copy.m_string = nullptr;

}


/********************************************************************************************************************
* Purpose: Destructor
*
* Precondition:
*	String
*
* Postcondition:
*	Destroys and deletes String.
*
********************************************************************************************************************/
String::~String()
{
	try
	{
		delete[] m_string;
	}
	catch (bad_alloc Exception)
	{
		cout << "Delete problem still working on.\n" << endl;
		throw;
	}

}


/********************************************************************************************************************
* Purpose: Operator Equals
*
* Precondition:
*	String
*
* Postcondition:
*	Sets String Values to the String on the RHS.
*
********************************************************************************************************************/
String& String::operator=(const String& rhs)
{
	if (this != &rhs)
	{
		delete[] m_string;
		if (rhs.m_string != nullptr)
		{
			try
			{
				m_string = new char[strlen(rhs.m_string) + 1];
				strcpy_s(m_string, strlen(rhs.m_string) + 1, rhs.m_string);
				m_length = strlen(m_string);
			}
			catch (bad_alloc Exception)
			{
				throw;
			}
		}
		else
		{
			m_string = nullptr;
		}
	}
	return *this;

}


/********************************************************************************************************************
* Purpose: Operator Equals Move
*
* Precondition:
*	String
*
* Postcondition:
*	Redirects resources.
*
********************************************************************************************************************/
String& String::operator=(String&& rhs)
{
	if (this != &rhs)
	{
		delete[] m_string;
		m_string = rhs.m_string;
		m_length = rhs.m_length;
		rhs.m_string = nullptr;
	}
	else
	{
		m_string = nullptr;
		m_length = 0;
	}
	return *this;
}


/********************************************************************************************************************
* Purpose: Operator is equal.
*
* Precondition:
*	String
*
* Postcondition:
*	Returns True/False
*
********************************************************************************************************************/
bool String::operator==(const String& Object) const
{
	return strcmp(m_string, Object.m_string) == 0 ? true : false;

}


/********************************************************************************************************************
* Purpose: Operator is Equal
*
* Precondition:
*	Character String
*
* Postcondition:
*	Returns True/False
*
********************************************************************************************************************/
bool String::operator==(const char* String) const
{
	return strcmp(m_string, String) == 0 ? true : false;

}


/********************************************************************************************************************
* Purpose: Operator Not Equal
*
* Precondition:
*	Character String
*
* Postcondition:
*	Returns True/False
*
********************************************************************************************************************/
bool String::operator!=(const char* String) const
{
	return strcmp(m_string, String) != 0 ? true : false;

}


/********************************************************************************************************************
* Purpose: Operator not Equal.
*
* Precondition:
*	String
*
* Postcondition:
*	Returns True/False
*
********************************************************************************************************************/
bool String::operator!=(const String& Object) const
{
	return strcmp(m_string, Object.m_string) != 0 ? true : false;

}


/********************************************************************************************************************
* Purpose: Operator Less Than
*
* Precondition:
*	Character String
*
* Postcondition:
*	Returns True/False
*
********************************************************************************************************************/
bool String::operator<(const char* String) const
{
	return strcmp(m_string, String) < 0 ? true : false;

}


/********************************************************************************************************************
* Purpose: Operator Less Than
*
* Precondition:
*	String
*
* Postcondition:
*	Returns True/False
*
********************************************************************************************************************/
bool String::operator<(const String& Object) const
{
	return strcmp(m_string, Object.m_string) < 0 ? true : false;

}


/********************************************************************************************************************
* Purpose: Operator Less Than Equal
*
* Precondition:
*	Character String
*
* Postcondition:
*	Returns True/False
*
********************************************************************************************************************/
bool String::operator<=(const char* String) const
{
	return strcmp(m_string, String) <= 0 ? true : false;

}


/********************************************************************************************************************
* Purpose: Operator Less Than Equal
*
* Precondition:
*	String
*
* Postcondition:
*	Returns True/False
*
********************************************************************************************************************/
bool String::operator<=(const String& Object) const
{
	return strcmp(m_string, Object.m_string) <= 0 ? true : false;

}


/********************************************************************************************************************
* Purpose: Operator Greater Than
*
* Precondition:
*	Character String
*
* Postcondition:
*	Returns True/False
*
********************************************************************************************************************/
bool String::operator>(const char* String) const
{
	return strcmp(m_string, String) > 0 ? true : false;

}


/********************************************************************************************************************
* Purpose: Operator Greater Than
*
* Precondition:
*	String
*
* Postcondition:
*	Returns True/False
*
********************************************************************************************************************/
bool String::operator>(const String& Object) const
{
	return strcmp(m_string, Object.m_string) > 0 ? true : false;

}


/********************************************************************************************************************
* Purpose: Operator Greater Than Equal
*
* Precondition:
*	String
*
* Postcondition:
*	Returns True/False
*
********************************************************************************************************************/
bool String::operator>=(const String& Object) const
{
	return strcmp(m_string, Object.m_string) >= 0 ? true : false;

}


/********************************************************************************************************************
* Purpose: Operator Greater Than Equal
*
* Precondition:
*	Character String
*
* Postcondition:
*	Returns True/False
*
********************************************************************************************************************/
bool String::operator>=(const char* String) const
{
	return strcmp(m_string, String) >= 0 ? true : false;

}


/********************************************************************************************************************
* Purpose: Operator Plus
*
* Precondition:
*	String
*
* Postcondition:
*	Appends RHS to String.
*
********************************************************************************************************************/
String String::operator+(const String& rhs)
{
	String Temp;
	int x = strlen(m_string);
	int y = strlen(rhs.m_string);
	try
	{
		Temp.m_string = new char[x + y + 1];
		strcpy_s(Temp.m_string, strlen(m_string) + 1, m_string);
		strcat(Temp.m_string, rhs.m_string);
		delete[] m_string;
		m_string = Temp.m_string;
		m_length = strlen(m_string);
		Temp.m_string = nullptr;
	}
	catch (bad_alloc Exemption)
	{
		throw;
	}
}


/********************************************************************************************************************
* Purpose: Operator Plus Equals
*
* Precondition:
*	String
*
* Postcondition:
*	Appends RHS to String.
*
********************************************************************************************************************/
String String::operator+=(const String& rhs)
{
	String Temp;
	int x = strlen(m_string);
	int y = strlen(rhs.m_string);
	try
	{
		Temp.m_string = new char[x + y + 1];
	}
	catch (bad_alloc Exemption)
	{
		throw;
	}
	strcpy_s(Temp.m_string, strlen(m_string) + 1, m_string);
	strcat(Temp.m_string, rhs.m_string);
	*this = Temp;
	return Temp;
}


/********************************************************************************************************************
* Purpose: Operator Increment
*
* Precondition:
*	None
*
* Postcondition:
*	Sets String to all Upper Case.
*
********************************************************************************************************************/
String& String::operator++()
{
	_strupr(m_string);
	return *this;

}


/********************************************************************************************************************
* Purpose: Operator Increment Post
*
* Precondition:
*	None
*
* Postcondition:
*	Sets String to all Upper Case.
*
********************************************************************************************************************/
String& String::operator++(int)
{
	String Temp(*this);
	++(*this);
	return Temp;

}


/********************************************************************************************************************
* Purpose: Operator Decrement.
*
* Precondition:
*	None
*
* Postcondition:
*	Sets String to all Lower Case.
*
********************************************************************************************************************/
String& String::operator--()
{
	_strlwr(m_string);
	return *this;

}


/********************************************************************************************************************
* Purpose: Operator Decrement Post
*
* Precondition:
*	None
*
* Postcondition:
*	Sets String to all Lower Case
*
********************************************************************************************************************/
String& String::operator--(int)
{
	String Temp(*this);
	--(*this);
	return Temp;

}


/********************************************************************************************************************
* Purpose: Operator Subscript
*
* Precondition:
*	Integer
*
* Postcondition:
*	Returns Character at that element in the String.
*
********************************************************************************************************************/
char String::operator[](int i)
{
	int Expt = -1;
	char x;
	if (i > m_length)
	{
		throw Expt;
	}
	x = m_string[i];
	
	return x;
}


/********************************************************************************************************************
* Purpose: Operator Conversion
*
* Precondition:
*	None
*
* Postcondition:
*	Returns the String.
*
********************************************************************************************************************/
String::operator char* () const
{
	return m_string;

}


/********************************************************************************************************************
* Purpose: Get Length
*
* Precondition:
*	None
*
* Postcondition:
*	Returns the number of Elements in the String.
*
********************************************************************************************************************/
int String::GetLength()
{
	return m_length;

}


/********************************************************************************************************************
* Purpose: Get String
*
* Precondition:
*	None
*
* Postcondition:
*	Returns the String.
*
********************************************************************************************************************/
const char* String::GetString() const
{
	return m_string;

}


/********************************************************************************************************************
* Purpose: Operator Extraction
*
* Precondition:
*	String
*
* Postcondition:
*	Sends the String to Out Stream.
*
********************************************************************************************************************/
ostream& operator<<(ostream& out, const String& rhs)
{
	out << rhs.m_string << "  " << rhs.m_length;
	return out;


}


/********************************************************************************************************************
* Purpose: Operator Insertion
*
* Precondition:
*	String
*
* Postcondition:
*	String to In Stream.
*
********************************************************************************************************************/
istream& operator>>(istream& in, String& rhs)
{
	char* Temp;
	Temp = new char[strlen(rhs.m_string) + 1];
	in.getline(Temp, strlen(rhs.m_string));
	rhs = String(Temp);
	return in;

}
