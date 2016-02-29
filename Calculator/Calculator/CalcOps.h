#pragma once
#include <iostream>
#include <string>
#include <stack>
using namespace std;

enum operationNum {
	Addition, Subtraction, Multiplication, Division
};

class CalcOps
{
public:
	CalcOps();
	~CalcOps();
	
	//overload +
	void calculate(const string& input, stack<double>& CalcStack);
	
private:
	string operand;								//keep track of what operand using
	float number;
};

