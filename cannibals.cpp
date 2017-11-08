/*
Name: Tamanna Sharma
Version: 10/27/2017  1.0

cannibals.cpp : Defines the entry point for the console application.Solves the puzzle using recursion
*/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;
/*
iniCal=  cannibals on left side of the bank
iniExpo=  explorer on left side of the bank
finCal= cannibals on the right side of the bank
finExpo= explorer on the right side of the bank
b= boat
*/
int iniCal = 3, iniExpo = 3, finExpo = 0, finCal = 0, b = 0, temp = 1;

/* --------------------------------------------Headers------------------------------------------
headers for methods
*/
class cannibals
{
public:
	cannibals();

	int solution(int iniCal, int iniExpo, int finExpo, int finCal, int b);
	void show();

	vector<string> result;
	vector<int> completed;

};
/* --------------------------------------------cannibals() ------------------------------------------
constructor for cannibals
*/
cannibals::cannibals()
{
	completed.assign(11, 0);
	result.push_back("LEFT           RIGHT ");
	result.push_back(" ");
	result.push_back("EEECCC           --- ");
}
/* --------------------------------------------solution------------------------------------------------
this method calculates the right soluton using recursion. this method is using various if and else
conditions to get the right solution.
*/
int cannibals::solution(int iniCal, int iniExpo, int finExpo, int finCal, int b)
{
	if (finCal == 3 && finExpo == 3 && b == 1) {
		return 0;
	}
	else if (completed.at(10) != 1 && (b == 0))
	{
		completed.at(10) = 1;
		temp = solution(iniCal - 2, iniExpo, finExpo, finCal + 2, 1);
		result.push_back("---           EEECCC");
	}
	else if (completed.at(9) != 1)
	{
		completed.at(9) = 1;
		temp = solution(iniCal + 1, iniExpo, finExpo, finCal - 1, 0);
		result.push_back("CC              EEEC");
	}
	else if (completed.at(8) != 1 && (b == 0))
	{
		completed.at(8) = 1;
		temp = solution(iniCal - 2, iniExpo, finExpo, finCal + 2, 1);
		result.push_back("C              EEECC");
	}
	else if (completed.at(7) != 1)
	{
		completed.at(7) = 1;
		temp = solution(iniCal + 1, iniExpo, finExpo, finCal - 1, 0);
		result.push_back("CCC              EEE");
	}
	else if (completed.at(6) != 1 && (b == 0))
	{
		completed.at(6) = 1;
		temp = solution(iniCal, iniExpo - 2, finExpo + 2, finCal, 1);
		result.push_back("CC              EEEC");
	}
	else if (completed.at(5) != 1)
	{
		completed.at(5) = 1;
		temp = solution(iniCal + 1, iniExpo + 1, finExpo - 1, finCal - 1, 0);
		result.push_back("CCEE              EC");
	}
	else if (completed.at(4) != 1 && (b == 0))
	{
		completed.at(4) = 1;
		temp = solution(iniCal, iniExpo - 2, finExpo + 2, finCal, 1);
		result.push_back("CE              EECC");
	}
	else if (completed.at(3) != 1)
	{
		completed.at(3) = 1;
		temp = solution(iniCal + 1, iniExpo, finExpo, finCal - 1, 0);
		result.push_back("CEEE              CC");
	}
	else if (completed.at(2) != 1 && (b == 0))
	{
		completed.at(2) = 1;
		temp = solution(iniCal - 2, iniExpo, finExpo, finCal + 2, 1);
		result.push_back("EEE              CCC");
	}
	else if (completed.at(1) != 1)
	{
		completed.at(1) = 1;
		temp = solution(iniCal, iniExpo + 1, finExpo - 1, finCal, 0);
		result.push_back("CCEEE              C");
	}
	else if (completed.at(0) != 1 && (b == 0))
	{
		completed.at(0) = 1;
		temp = solution(iniCal - 1, iniExpo - 1, finExpo + 1, finCal + 1, 1);
		result.push_back("CCEE              EC");
	}
	return temp;
}
/* --------------------------------------------show------------------------------------------
it is to show output of the right solution for cannibles and explorer puzzle after recursion
*/
void cannibals::show()
{
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << endl;
	}
}
/* --------------------------------------------main------------------------------------------
it is the main method for output all the results
*/
int main()
{
	cannibals c;
	c.solution(iniCal, iniExpo, finExpo, finCal, b);
	c.show();
	return 0;
}

