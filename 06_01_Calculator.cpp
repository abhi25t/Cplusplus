#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iterator>
//#include "std_lib_facilities.h"
using namespace std;

int main()
{
	cout << "Please enter expression (we can handle + and –): ";
	int lval = 0;
	int rval = 0;
	char op;
	int res;
	cin >> lval >> op >> rval; // read something like 1 + 3

	if (op=='+')
		res = lval + rval; // addition
	else if (op=='-')
		res = lval - rval; // subtraction
	else if (op=='*')
		res = lval * rval; // multiplication	
	cout << "Result: " << res << "\n";
	return 0;
}
