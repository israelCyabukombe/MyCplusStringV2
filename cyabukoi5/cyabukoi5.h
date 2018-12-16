/********************************************************************
*** NAME : Israel Cyabukombe.
*** Job  : Web Developer I
*** CLASS : CSc 346 OOP the best class ever
*** ASSIGNMENT : 	5
*** DUE DATE : 4/13/2016
*** INSTRUCTOR : GAMRADT : One of my great professors in college
*********************************************************************
*** DESCRIPTION :This is an improvement to the String346 class from the
				 the previous assignment.The header file will defines
				 a String346 class with class implementation that will operate as the
				 C++ string. The class uses non member friend functions
*******************************************************************/

#ifndef _CYABUKOI5_H
#define _CYABUKOI5_H
#include<iostream>
namespace StringNS {
	class String346 {
		/********************************************************************
		*** FUNCTION : operator <
		*********************************************************************
		*** DESCRIPTION :	This function will compare two objects and if the
							left is less than the right, return true

		*** INPUT ARGS : String346 &, String346 &
		*** OUTPUT ARGS :
		*** IN/OUT ARGS :
		*** RETURN : boolean
		********************************************************************/
		friend bool operator < (const String346 &, const String346 &);
		/********************************************************************
		*** FUNCTION : operator <
		*********************************************************************
		*** DESCRIPTION : This function will compare a char * on the left to
						  a right object and will return true if left is less
						  than right and false otherwise
		*** INPUT ARGS  :
		*** OUTPUT ARGS :
		*** IN/OUT ARGS :
		*** RETURN : boolean
		********************************************************************/
		friend bool operator < (const char *, const String346 &);
		/********************************************************************
		*** FUNCTION : operator <
		*********************************************************************
		*** DESCRIPTION :	This function will compare an object on the left
							with a char on the right and will return true if
							left is less than right false otherwise
		*** INPUT ARGS : char *
		*** OUTPUT ARGS :
		*** IN/OUT ARGS :
		*** RETURN : boolean
		********************************************************************/
		friend bool operator <(const String346 &, const char *);
		/********************************************************************
		*** FUNCTION : operator >
		*********************************************************************
		*** DESCRIPTION :  This function compares two objects, 1 on the left and
						   The other on the right, returns a true if left is greater
						   than right
		*** INPUT ARGS : String346 & Obj
		*** OUTPUT ARGS :
		*** IN/OUT ARGS :
		*** RETURN : boolean
		********************************************************************/
		friend bool operator >(const String346 &, const String346 &);

		/********************************************************************
		*** FUNCTION : operator >
		*********************************************************************
		*** DESCRIPTION : This function will compare a char * on the left to
						  an object on the right and return true if the right
						  is greater than the left
		*** INPUT ARGS : char * , STring346 &
		*** OUTPUT ARGS :
		*** IN / OUT ARGS :
		*** RETURN : boolean value
		******************************************************************** */
		friend bool operator >(const char *, const String346 &);
		/******************************************************************
		* FUNCTION : operator >
		*********************************************************************
		*** DESCRIPTION : This function will compare an object on the left to
						  a char* on the right and return true if the right
						  is greater than the left
		*** INPUT ARGS : STring346 &, char *
		*** OUTPUT ARGS :
		*** IN / OUT ARGS :
		*** RETURN : boolean value
		******************************************************************** */
		friend bool operator >(const String346 &, const char*);
		/********************************************************************
		*** FUNCTION :operator ==
		*********************************************************************
		*** DESCRIPTION : This function compares to objects and if obj 1 is
						  equal to obj 2 the function returns true
		*** INPUT ARGS :String346 & obj
		*** OUTPUT ARGS :
		*** IN/OUT ARGS :
		*** RETURN :
		********************************************************************/
		friend bool operator ==(const String346 &, const String346 &);
		/********************************************************************
		*** FUNCTION :operator ==
		*********************************************************************
		*** DESCRIPTION : This function compares a char * on the left to a
						  passed in obj on the right
		*** INPUT ARGS :String346 & obj
		*** OUTPUT ARGS :
		*** IN/OUT ARGS :
		*** RETURN :
		********************************************************************/

		friend bool operator ==(const char *, const String346 &);
		/********************************************************************
		*** FUNCTION :operator ==
		*********************************************************************
		*** DESCRIPTION : This function compares an object on the left to a
						  passed in char *on the right
		*** INPUT ARGS :String346 & obj
		*** OUTPUT ARGS :
		*** IN/OUT ARGS :
		*** RETURN :
		********************************************************************/
		friend bool operator ==(const String346 &, const char *);
		/********************************************************************
		*** FUNCTION :operator ++
		*********************************************************************
		*** DESCRIPTION : This function will increment the value of String346
						  object(Prefix)
		*** INPUT ARGS :String346 & obj
		*** OUTPUT ARGS :
		*** IN/OUT ARGS :
		*** RETURN :
		********************************************************************/
		friend String346 & operator ++(String346 &);
		/********************************************************************
		*** FUNCTION :operator ++
		*********************************************************************
		*** DESCRIPTION : This function will increment the value of String346
						  object(Postfix)
		*** INPUT ARGS  :String346 & obj, const int
		*** OUTPUT ARGS :
		*** IN/OUT ARGS :
		*** RETURN :
		********************************************************************/
		friend String346  operator ++(String346 &, const int);
		/********************************************************************
		*** FUNCTION :operator <<
		*********************************************************************
		*** DESCRIPTION : This function will accept ostream object and a String346
		*** INPUT ARGS  : ostream & obj String346 & obj
		*** OUTPUT ARGS :
		*** IN/OUT ARGS :
		*** RETURN :
		********************************************************************/
		friend std::ostream & operator<<(std::ostream &, const String346 &);
		/********************************************************************
		*** FUNCTION :operator >>
		*********************************************************************
		*** DESCRIPTION : This function will accept a istream object and an
						  String346 object
		*** INPUT ARGS :istream &, String346 &
		*** OUTPUT ARGS :
		*** IN/OUT ARGS :
		*** RETURN : return istream obj
		********************************************************************/
		friend std::istream & operator >> (std::istream &, String346 &);

	public:
		/********************************************************************
		*** FUNCTION : constructor
		*********************************************************************
		*** DESCRIPTION : default  parametized consructor that creates a string 346 from the passed in char*
		*** INPUT ARGS : inStr
		*** OUTPUT ARGS :none
		*** IN/OUT ARGS :none
		*** RETURN : nothing
		********************************************************************/
		explicit String346(const char * = "");
		/********************************************************************
		*** FUNCTION : copy constructor
		*********************************************************************
		*** DESCRIPTION : It accepts an instance of a class String and then it
						  creates a copy of it
		*** INPUT ARGS : obj
		*** OUTPUT ARGS :none
		*** IN/OUT ARGS :none
		*** RETURN : nothing
		********************************************************************/
		String346(const String346 &);
		/********************************************************************
		*** FUNCTION : destructor
		*********************************************************************
		*** DESCRIPTION : destroys the string class when program terminates
		*** INPUT ARGS : none
		*** OUTPUT ARGS :none
		*** IN/OUT ARGS :none
		*** RETURN : nothing
		********************************************************************/
		~String346();
		/********************************************************************
		*** FUNCTION : getSize()
		*********************************************************************
		*** DESCRIPTION : returns the sizeof the string
		*** INPUT ARGS : none
		*** OUTPUT ARGS :none
		*** IN/OUT ARGS :none
		*** RETURN : Unsigned int size
		********************************************************************/
		inline unsigned int getSize() const;
		/********************************************************************
		*** FUNCTION : copy
		*********************************************************************
		*** DESCRIPTION : accepts an instance and copies the string into the
						  invonking class string
		*** INPUT ARGS : String Obj
		*** OUTPUT ARGS :
		*** IN/OUT ARGS :
		*** RETURN : (*this)
		********************************************************************/
		String346 & operator =(const String346 &);
		/********************************************************************
		*** FUNCTION : copy
		*********************************************************************
		*** DESCRIPTION : it copies a passed in char string into the String
						  class instance
		*** INPUT ARGS  : char * inStr1
		*** OUTPUT ARGS :
		*** IN/OUT ARGS :
		*** RETURN : (*this) invoking class
		********************************************************************/
		String346 & operator=(const char *);
		/********************************************************************
		*** FUNCTION : concat
		*********************************************************************
		*** DESCRIPTION : concatinates a passedin object to the current
						  string inside the invoking class
		*** INPUT ARGS : String346 & obj
		*** OUTPUT ARGS :none
		*** IN/OUT ARGS :none
		*** RETURN : (*this) class invocationd
		********************************************************************/
		String346  operator+(const String346 &);
		/********************************************************************
		*** FUNCTION :operator+
		*********************************************************************
		*** DESCRIPTION :concatenate a char * to the invoking instance
		*** INPUT ARGS :const char *
		*** OUTPUT ARGS :
		*** IN/OUT ARGS :
		*** RETURN : (*this)
		********************************************************************/
		String346  operator+(const char *);
		/********************************************************************
		*** FUNCTION :operator+=
		*********************************************************************
		*** DESCRIPTION :concatenate a passed in object to the this pointer a
						 and save the results in the this
		*** INPUT ARGS :const String346 &
		*** OUTPUT ARGS :
		*** IN/OUT ARGS :
		*** RETURN :(*this)
		********************************************************************/
		String346 & operator+=(const String346 &);
		/********************************************************************
		*** FUNCTION :operator+=
		*********************************************************************
		*** DESCRIPTION :concatenate a char * to the this instance and save the
						 results in the this instance
		*** INPUT ARGS :const char *
		*** OUTPUT ARGS :
		*** IN/OUT ARGS :
		*** RETURN :(*this)
		********************************************************************/
		String346 & operator+=(const char *);
		/********************************************************************
		*** FUNCTION :operator--
		*********************************************************************
		*** DESCRIPTION : decrement the String346 object ascii value by one
		*** INPUT ARGS :
		*** OUTPUT ARGS :
		*** IN/OUT ARGS :
		*** RETURN :
		********************************************************************/
		String346 & operator--();
		/********************************************************************
		*** FUNCTION : operator--
		*********************************************************************
		*** DESCRIPTION : decrement the ascii values of the char * by one
		*** INPUT ARGS :
		*** OUTPUT ARGS :
		*** IN/OUT ARGS :
		*** RETURN :
		********************************************************************/
		String346 operator--(const int);
		/********************************************************************
		*** FUNCTION : operator!
		*********************************************************************
		*** DESCRIPTION :
		*** INPUT ARGS :none
		*** OUTPUT ARGS :none
		*** IN/OUT ARGS :none
		*** RETURN :nothing
		********************************************************************/

		String346  operator !();
		/********************************************************************
		*** FUNCTION : view()
		*********************************************************************
		*** DESCRIPTION : display the current state of the String346 obj
		*** INPUT ARGS :none
		*** OUTPUT ARGS :none
		*** IN/OUT ARGS :none
		*** RETURN :nothing
		********************************************************************/
		void view()const;

	private:
		void destroy();
		char * data;
		unsigned int size;
	};
	/********************************************************************
	*** FUNCTION : getSize()
	*********************************************************************
	*** DESCRIPTION : returns the current size of the String when a constructor
					  is invoked or when the size is changed
	*** INPUT ARGS : none
	*** OUTPUT ARGS :none
	*** IN/OUT ARGS :none
	*** RETURN :size
	********************************************************************/
	inline unsigned int String346::getSize() const {
		return  size;
	}
}

#endif // _CYABUKOI5_H
