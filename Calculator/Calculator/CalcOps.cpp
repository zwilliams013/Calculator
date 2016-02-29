#include <iostream>
#include "CalcOps.h"
using namespace std;



CalcOps::CalcOps()
{
}


CalcOps::~CalcOps()
{
}


//do operations
void CalcOps::calculate(const string& input, stack<double>& CalcStack)
{
	double lVal, rVal, result;
	lVal = CalcStack.top();
	CalcStack.pop();
	rVal = CalcStack.top();

	if (input == "+") 
	{
		result = lVal + rVal;
	}
	else if (input == "-") 
	{
		result = lVal - rVal;
	}
	else if (input == "*") 
	{
		result = lVal * rVal;
	}
	else if (input == "/") 
	{
		result = lVal / rVal;
	}
	cout << result << endl;
}