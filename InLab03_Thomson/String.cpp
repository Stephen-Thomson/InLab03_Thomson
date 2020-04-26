#include <cstring>
#include <cctype>
#include <iostream>
using std::cout;
using std::endl;
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
String::String()
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
String::String(char ch)
{


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
String::String(const char* String)
{


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
String::String(const String& copy)
{


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
istream& operator>>(istream& in, const String& rhs)
{
	

}
