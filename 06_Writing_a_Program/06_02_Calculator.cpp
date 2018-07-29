#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iterator>
//#include "std_lib_facilities.h"
using namespace std;

// This will give 1+2*3 = 9

int main()
{
	cout << "Please enter expression\n";
	cout << "add an x to end expression (e.g., 1+2*3x): ";
	int lval = 0;
	int rval;
	cin >> lval;   // read leftmost operand
	if (!cin) cerr << "\nNo first operand";

	for (char op; cin>>op;) { // read operator and right hand operand repeatedly
		if (op!='x') cin >> rval;
		if (!cin) cerr << "No second operand";
		
		switch(op) {
		case '+':
			lval += rval; // addition
			break;
		case '-':
			lval -= rval; // subtraction
			break;
		case '*':
			lval *= rval; // multiplication	
			break;
		case '/':
			lval /= rval; // multiplication	
			break;
		default:
			cout << "Result: " << lval << "\n";
			return 0;		
		}	
	}	
	cerr << "\nBad Expression";
}
