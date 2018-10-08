/********************************************************************
*** NAME : Israel Cyabukombe
*** CLASS : CSc 346
*** ASSIGNMENT : 	5
*** DUE DATE : 4/12/2016
*** INSTRUCTOR : GAMRADT : One of my great professors in college
*********************************************************************
*** DESCRIPTION :This implementation file will implement the a String346
				 function step by step.The implementationd shows non member
				 friend functions,function overloading, operator
				 overloading and code reuse application
*******************************************************************/
#include "cyabukoi5.h"
#include<iostream>
#include <cstdlib>
#include<cstring>

namespace StringNS {
	/********************************************************************
	*** FUNCTION : constructor
	*********************************************************************
	*** DESCRIPTION : default  parametized consructor that creates a string 346 from the passed in char*
	*** INPUT ARGS : inStr
	*** OUTPUT ARGS :none
	*** IN/OUT ARGS :none
	*** RETURN : nothing
	********************************************************************/
	String346::String346(const char * inStr) :data(NULL), size(0)
	{
		using std::nothrow;
		using std::cout;

		size = strlen(inStr);
		//--Allocate memory if only size of string is not 0
		if (getSize() != 0)
		{
			(*this).data = new(nothrow) char[getSize()];
			//---Test New-----
			if (data == NULL) {
				cout << "Memory allocation failed!";
			}
			else
			{
				for (unsigned int i = 0; i < size; i++)
				{
					data[i] = inStr[i];
				}
			}
		}
	}

	/********************************************************************
	*** FUNCTION : copy constructor
	*********************************************************************
	*** DESCRIPTION : It accepts an instance of a class String and then it
					  reuses the copy function with the invoking instance( this)
	*** INPUT ARGS : copiedStr- the object to be copied
	*** OUTPUT ARGS :none
	*** IN/OUT ARGS :none
	*** RETURN : nothing
	********************************************************************/

	String346::String346(const String346 &copiedStr) :data(NULL), size(0)
	{
		(*this) = (copiedStr);
	}

	/********************************************************************
	*** FUNCTION : destructor
	*********************************************************************
	*** DESCRIPTION : reuses destroy to free memory of the String class
	*** INPUT ARGS : none
	*** OUTPUT ARGS :none
	*** IN/OUT ARGS :none
	*** RETURN : nothing
	********************************************************************/
	String346::~String346()
	{
		destroy();
	}
	/********************************************************************
	*** FUNCTION : operator =
	*********************************************************************
	*** DESCRIPTION : accepts and instance and copies it in the invoking
					  instance access through the this pointer
	*** INPUT ARGS : cop
	*** OUTPUT ARGS :
	*** IN/OUT ARGS :
	*** RETURN : (*this)
	********************************************************************/
	String346 & String346::operator=(const String346 & pInst) {
		using std::nothrow;
		using std::cout;
		destroy();
		if (this != &pInst)  //test for self Assignment
		{
			size = pInst.getSize();
			if (pInst.getSize() == 0)
			{
				destroy();
			}
			else
			{
				data = new(nothrow) char[pInst.getSize()];
				if (data == NULL) {
					cout << "Memory allocation failed!";
				}
				else
				{
					for (unsigned int i = 0; i < getSize(); i++)
					{
						data[i] = pInst.data[i];
					}
				}
			}
		}
		else

			return (*this);
	}
	/********************************************************************
	*** FUNCTION : operator =
	*********************************************************************
	*** DESCRIPTION : It creates an String346 string from a char* and
					  copies a passed in char string into the String
					  class instance.
	*** INPUT ARGS  : char * inStr1
	*** OUTPUT ARGS :
	*** IN/OUT ARGS :
	*** RETURN : (*this) invoking class
	******************************************************************/
	String346 & String346::operator=(const char *inStr1)
	{
		String346 temp(inStr1);
		(*this) = temp;

		return (*this);
	}
	/********************************************************************
	*** FUNCTION : operator +
	*********************************************************************
	*** DESCRIPTION :It concatenates a Passed in object and the this instance
					 and stores the result in a temporary String346 object
					 and returns the object by value
	*** INPUT ARGS : String346 & pInst
	*** OUTPUT ARGS :none
	*** IN/OUT ARGS :none
	*** RETURN : (*this) class invocationd
	********************************************************************/
	String346 String346::operator +(const String346 & pInst)
	{
		using std::nothrow;
		using std::cout;
		using std::endl;
		unsigned int i = 0;
		unsigned int j = 0;
		String346 temp(*this);
		temp.size = (*this).getSize() + pInst.getSize();
		if (temp.size != 0)
		{
			temp.data = new(nothrow) char[temp.getSize()];
			if (data == NULL)
			{
				cout << "No memory on Heap!" << endl;
			}
		}
		for (i; i < getSize(); i++)
		{
			temp.data[i] = data[i];
		}
		destroy();
		for (i; i < temp.getSize(); i++)
		{
			temp.data[i] = pInst.data[j];
			j++;
		}

		return (temp);
	}
	/********************************************************************
	*** FUNCTION :operator +
	*********************************************************************
	*** DESCRIPTION : concatenates a char * passed in to the invoking instance
					  reuses constructor and operator +(class inst)
	*** INPUT ARGS : char*inStr2
	*** OUTPUT ARGS :
	*** IN/OUT ARGS :
	*** RETURN :return( *this)
	********************************************************************/
	String346 String346::operator+(const char *inStr2)
	{
		String346 temp(inStr2);

		(*this) + (temp);

		return (temp);
	}
	/********************************************************************
	*** FUNCTION :operator +=
	*********************************************************************
	*** DESCRIPTION : Concatenates two objects the this and the passedIn and
					  saves the result in the this instance
	*** INPUT ARGS : String346 & right
	*** OUTPUT ARGS :
	*** IN/OUT ARGS :
	*** RETURN :return( *this)
	********************************************************************/
	String346 & String346:: operator+=(const String346 &right)
	{
		(*this) = (*this) + right;

		return(*this);
	}
	/********************************************************************
	*** FUNCTION :operator +=
	*********************************************************************
	*** DESCRIPTION : Concatenate the this and the passedIn char* and
					 saves the result in the this instance, reuses
	*** INPUT ARGS : char * right
	*** OUTPUT ARGS :
	*** IN/OUT ARGS :
	*** RETURN :return( *this)
	********************************************************************/
	String346 & String346:: operator+=(const char * right)
	{
		String346 temp(right);
		(*this) += temp;

		return(*this);
	}
	/********************************************************************
	*** FUNCTION :operator < "lessThan"
	*********************************************************************
	*** DESCRIPTION : compares a left and a right objctes and returns true
					  or false depending on which is lessthan the other
	*** INPUT ARGS :String346 & right, String346 & left
	*** OUTPUT ARGS :
	*** IN/OUT ARGS :
	*** RETURN : boolean
	********************************************************************/
	bool operator <(const String346 & left, const String346 & right)
	{
		bool c;
		unsigned loopSize = 0;
		if (right.getSize() < left.getSize())
		{
			loopSize = (right).getSize();
		}
		else {
			loopSize = left.getSize();
		}
		for (unsigned int i = 0; i < loopSize; i++)
		{
			if (left.data[i] < right.data[i])        // if the left object is less than right object
			{
				c = true;
			}
			else if (right.data[i] < left.data[i])  // if the left object is greater than left object
			{
				c = false;
			}
			else                                   //if they are equal but one has a larger size ie "good" and "goodbye"
			{
				if (left.getSize() < right.getSize())
				{
					c = true;
				}
				else
				{
					c = false;
				}
			}
		}
		return c;
	}
	/********************************************************************
	*** FUNCTION :operator <
	*********************************************************************
	*** DESCRIPTION : compares a char * argument on the left to an object
					  to the right, it creates a temp object of the char *
					  and reuses the operator < above to compare
	*** INPUT ARGS :char * left, String346 & rightObj
	*** OUTPUT ARGS :
	*** IN/OUT ARGS :
	*** RETURN : bolean
	********************************************************************/
	bool operator <(const char * left, const String346 & rightObj)
	{
		String346 temp(left);
		return temp < rightObj;
	}
	/********************************************************************
	*** FUNCTION :operator <
	*********************************************************************
	*** DESCRIPTION : recieves an object String346 on the right and char*
					  on the left and compares the two
	*** INPUT ARGS :char * inStr3, String346 &leftObj
	*** OUTPUT ARGS :
	*** IN/OUT ARGS :
	*** RETURN : bolean
	********************************************************************/
	bool operator <(const String346 &leftObj, const char *right)
	{
		String346 temp(right);

		return leftObj < temp;
	}
	/********************************************************************
	*** FUNCTION : operator > "greaterThan"
	*********************************************************************
	*** DESCRIPTION : compare String346 left and right by reusing the operator <
					  implementation
	*** INPUT ARGS : String346 & left, String346 & right
	*** OUTPUT ARGS :
	*** IN/OUT ARGS :
	*** RETURN : boolean
	********************************************************************/
	bool operator >(const String346 & left, const String346 & right)
	{
		bool b;
		if (left < (right) == false)
		{
			b = true;
		}
		else
		{
			b = false;
		}
		return b;
	}
	/********************************************************************
	*** FUNCTION : operator >
	*********************************************************************
	*** DESCRIPTION : reuses operator >( Obj,Obj), it creates a String346
					  from the passed in char * compares it to the right
					  object by reusing the operator> above
	*** INPUT ARGS :char *left,String346 & rightObj
	*** OUTPUT ARGS :
	*** IN/OUT ARGS :
	*** RETURN :boolean value
	********************************************************************/
	bool operator >(const char *left, const String346 & rightObj)
	{
		String346 temp(left);

		return temp > rightObj;
	}
	/********************************************************************
	*** FUNCTION : operator >
	*********************************************************************
	*** DESCRIPTION : recieves an object on the left and char* on the right
					  and reuses the operator >(obj,obj) function
	*** INPUT ARGS :String346 & leftObj, char *inStr4
	*** OUTPUT ARGS :
	*** IN/OUT ARGS :
	*** RETURN :boolean value
	********************************************************************/
	bool operator >(const String346 & leftObj, const char*right)
	{
		String346 temp(right);

		return (leftObj > temp);
	}
	/********************************************************************
	*** FUNCTION :operator == "equal"
	*********************************************************************
	*** DESCRIPTION : This function will compare two String346 objects,
					  left and right reuses operator < and operator > to
					  check if the objects are equal and returns true or
					  false
	*** INPUT ARGS :String346 & left, String346 & right
	*** OUTPUT ARGS :
	*** IN/OUT ARGS :
	*** RETURN :
	********************************************************************/
	bool operator ==(const String346 & left, const String346 & right)
	{
		bool b;
		if ((left < right) == false && (left > right) == false)
		{
			b = true;
		}
		else
		{
			b = false;
		}

		return b;
	}
	/********************************************************************
	*** FUNCTION : operator ==
	*********************************************************************
	*** DESCRIPTION : reuses the above equal function by creating a string346
					  from the passed in char * and comparing the equality of
					  the two objects
	*** INPUT ARGS :char *left, String346 & rightObj
	*** OUTPUT ARGS :
	*** IN/OUT ARGS :
	*** RETURN :(*this).equal(Temp)
	********************************************************************/
	bool operator ==(const char *left, const String346 & rightObj)
	{
		bool b = true;
		String346 temp(left);
		b = (temp == rightObj);
		return b;
	}
	/********************************************************************
	*** FUNCTION : operator ==
	*********************************************************************
	*** DESCRIPTION : reuses the above equal function by creating a string346
					  from the passed in char * on the right and compares both
					  return true if they are equal
	*** INPUT ARGS :String346 &leftObj, char *right
	*** OUTPUT ARGS :
	*** IN/OUT ARGS :
	*** RETURN :(*this).equal(Temp)
	********************************************************************/
	bool operator ==(const String346 &leftObj, const char *right)
	{
		bool b = true;
		String346 temp(right);
		b = (leftObj == temp);
		return b;
	}
	/********************************************************************
	*** FUNCTION : view()
	*********************************************************************
	*** DESCRIPTION : display the current state of the String346 obj
	*** INPUT ARGS :none
	*** OUTPUT ARGS :none
	*** IN/OUT ARGS :none
	*** RETURN :nothing
	********************************************************************/
	void String346::view()const
	{
		using std::cout;
		for (unsigned int i = 0; i < getSize(); i++)
		{
			cout << (*this).data[i];
		}
	}
	/********************************************************************
	*** FUNCTION : operator ++  "increment" prefix
	*********************************************************************
	*** DESCRIPTION : increase the current string to the lower string according
					  the characters ASCII values, char by character
	*** INPUT ARGS : none
	*** OUTPUT ARGS :none
	*** IN/OUT ARGS :nothing
	*** RETURN : (*this)
	********************************************************************/
	String346 & operator ++(String346 &pInst)
	{
		for (unsigned int i = 0; i < pInst.getSize(); i++)
		{
			++pInst.data[i];
		}
		return pInst;
	}
	/********************************************************************
	*** FUNCTION : operator ++  "increment" postfix
	*********************************************************************
	*** DESCRIPTION : increase the current string to the lower string according
	the characters ASCII values, char by character
	*** INPUT ARGS : none
	*** OUTPUT ARGS :none
	*** IN/OUT ARGS :nothing
	*** RETURN : (*this)
	********************************************************************/

	String346  operator ++(String346 &pInst, const int)
	{
		String346 temp(pInst);
		++pInst;
		return(temp);
	}
	/********************************************************************
	*** FUNCTION : operator-- prefix
	*********************************************************************
	*** DESCRIPTION : reduces the current string to the lower string according
					  the characters ASCII values, char by character
	*** INPUT ARGS : none
	*** OUTPUT ARGS :none
	*** IN/OUT ARGS :nothing
	*** RETURN : (*this)
	********************************************************************/
	String346 & String346:: operator--()
	{
		for (unsigned int i = 0; i < getSize(); i++)
		{
			--data[i];
		}
		return (*this);
	}
	/********************************************************************
	*** FUNCTION : operator -- postfix
	*********************************************************************
	*** DESCRIPTION : reduces the current string to the lower string according
	the characters ASCII values, char by character
	*** INPUT ARGS : none
	*** OUTPUT ARGS :none
	*** IN/OUT ARGS :nothing
	*** RETURN : (*this)
	********************************************************************/
	String346 String346::operator--(const int) {
		String346 temp(*this);
		--(*this);
		return temp;
	}
	/********************************************************************
	*** FUNCTION : operator!()
	*********************************************************************
	*** DESCRIPTION : This function checks the charactes in the String346
					  turns uppercase letters to lower case letters and
					  vice versa, ignoring the other non alphabetic characters

	*** INPUT ARGS :none
	*** OUTPUT ARGS :none
	*** IN/OUT ARGS :none
	*** RETURN :temp
	********************************************************************/

	String346 String346:: operator!()
	{
		String346 temp(*this);
		//using islower isupper and tolower toupper
		for (unsigned int i = 0; i < temp.getSize(); i++)
		{
			if (islower(temp.data[i]))
			{
				temp.data[i] = toupper(temp.data[i]);
			}
			else if (isupper(temp.data[i]))
			{
				temp.data[i] = tolower(temp.data[i]);
			}
		}
		return(temp);
	}
	/********************************************************************
	*** FUNCTION : destroy
	*********************************************************************
	*** DESCRIPTION : emptys the string class by deleting array and setting size to zero
	*** INPUT ARGS :none
	*** OUTPUT ARGS :none
	*** IN/OUT ARGS :nothing
	*** RETURN :nothing
	********************************************************************/

	void String346::destroy()
	{
		delete[] data;
		data = NULL;
		size = 0;
		return;
	}
	/********************************************************************
	*** FUNCTION : ostream
	*********************************************************************
	*** DESCRIPTION : insertion operator that helps output the STring346 object
	*** INPUT ARGS :none
	*** OUTPUT ARGS :none
	*** IN/OUT ARGS :nothing
	*** RETURN :nothing
	********************************************************************/
	std::ostream & operator<<(std::ostream & sout, const String346 & right)
	{
		for (unsigned int i = 0; i < right.getSize(); i++)
		{
			sout << right.data[i];
		}
		return sout;
	}
	/********************************************************************
	*** FUNCTION : istream
	*********************************************************************
	*** DESCRIPTION : extraction operator that prompts the user to insert
					  characters in the
	*** INPUT ARGS :none
	*** OUTPUT ARGS :none
	*** IN/OUT ARGS :nothing
	*** RETURN :nothing
	********************************************************************/
	std::istream & operator >> (std::istream & sin, String346&right)
	{
		char inStr[80];
		sin >> inStr;
		right = inStr;
		return sin;
	}
}