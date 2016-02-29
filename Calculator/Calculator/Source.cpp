#include <iostream>
#include <stack>
#include <string>`
#include <sstream>

using namespace std;

bool isOperator(const string& op);
void calculate(const string& input, stack<double>& CalcStack);

bool isOperator(const string& op) {

	/*
	if (op == "+" || op == "-" || op == "*" || op == "/")
	{
	
		cout << "Valid operator";
		return true;
	}
	else
	{
		return false;
	}*/
	string ops[] = { "+","-","*","/" };
	for (int i = 0; i < 4; i++) {
		if (op == ops[i])
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

int main()
{
	stack<double> CalcStack;
	string input;
	
	//greet user
	cout << "Welcome to the RPN calculator." << endl;

	//ask for input
	
	

	//calculate input, determin
	while(true)
	{
		cout << ">>";
		double num;
		cin >> input;
		if (istringstream(input) >> num)
		{
			CalcStack.push(num);
		}
		else if(isOperator(input))
		{
			calculate(input, CalcStack);
		}
		else if (input == "q") 
		{
			return 0;
		}
		else
		{
			cout << "Invalid entry." << endl;
		}
	}

	//display calculation
}

void calculate(const string& input, stack<double>& CalcStack)
{
	double lVal, rVal, result;
	lVal = CalcStack.top();
	CalcStack.pop();

	rVal = CalcStack.top();
	CalcStack.pop();

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
	CalcStack.push(result);
}