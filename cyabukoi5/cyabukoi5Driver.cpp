/********************************************************************
*** NAME : Israel Cyabukombe
*** CLASS : CSc 346
*** ASSIGNMENT : 	5
*** DUE DATE : 4/13/2016
*** INSTRUCTOR : GAMRADT : One of my great professors in college
*********************************************************************
*** DESCRIPTION :This is an improvement to the String346 class from the
				the previous assignment.The header file will defines
				a String346 class with class implementation that will operate as the
				C++ string. The class uses non member friend functions
*******************************************************************/
#include<iostream>
#include<sstream>
#include"cyabukoi5.h"
using namespace std

using namespace StringNS;

int main() {
	bool a;
	bool b;
	cout << "---------IMPROVING THE STRING CLASS------------------" << endl;
	String346 STG1("EEE");
	String346 S("D");
	cout << "xxxxx" << S;
	String346 STG2;
	STG2 = "imPROVISIONAL";
	STG2.view();
	cout << "\n\nAssignment and ! and one prefix are working" << endl;
	String346 STG3("abc");
	cout << STG3 << endl;
	cout << "0000 " << !STG3 << " 000000" << endl;
	a = STG1 > STG3;

	cout << a << endl;
	STG1 = "DDD";
	STG2 = "FFF";
	STG1.view();
	STG2.view();
	cout << endl;
	b = STG1 == STG3;

	cout << "is AAA==AAA" << endl;
	cout << b;
	cout << "\n";
	cout << "Testing for prefix and postfix--" << endl;
	--STG1;
	cout << "Should print CCC:::::";
	STG1.view();
	cout << "\nShould print EEE:::::";
	STG2--;
	STG2.view();
	cout << "\n--------------------------------------\n";
	cout << "Testing  for increment postfix prefix\n";
	String346 go("YYY");
	go++;
	cout << "Should print ZZZ::::::::::" << go;
	//go.view();
	cout << "\n";
	cout << "----------Testing for concatenation and insertion----------\n" << endl;
	String346 x("Oh my!");
	String346 y("GOSSSHHHH!");
	String346 z("OH MY");
	String346 s("goodness");
	//CO3.getSize() = CO1.getSize() + CO2.getSize();
	//cout << (b);
	cout << ",,,,,," << endl;
	//cout << (x + y);
	cout << "\n,,,,,,,,,,,,,";
	cout << "\n";
	cout << (x + y);
	z += s;
	cout << "\n" << z << endl;

	y += "DAVE";
	cout << "\nxxx :";
	cout << y;
	cout << " xxx" << endl;
	cout << "Testing for extraction cin-----" << endl;
	cout << "Enter the string:" << endl;
	cin >> z;
	cout << "coutz:: " << z << endl;
	//cout <<"cout::"<< z;

	//CO2.view();
	//cout <<CO1+CO2;
	cout << "\n";
	cout << "testing for operator !" << endl;
	String346 testNot("Gr_a7ce");
	cout << testNot << endl;
	cout << !testNot;
	cout << "\nTesting for goodbye and good" << endl;
	String346 M("good");
	String346 N("goodbye");
	String346 o("az");
	String346 p("ax");
	b = M < N;
	bool d = o > p;
	cout << "XX" << d << endl;

	/*stringstream input("xxxdfjsfhfjshdfsf");
	String346 I(" ");
	cout << "\n\nTesting istream and ostream\n";
	input >> I;
	cout << I;*/
	cout << "\nTesting for self assignment\n";
	String346 me("abc");
	String346 my("cba");
	me = me;
	cout << "\n";

	cout << "Testing for string on right < and > object on left" << endl;
	String346 son("abz");
	bool t = "abz" == son;
	cout << t << endl;

	system("Pause");
	return 0;
}
