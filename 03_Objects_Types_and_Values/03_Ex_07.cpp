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
	cout << "\nEnter strings to be sorted: ";
	vector<string> my_strings; 
	for (string str; cin>>str; ) 
		my_strings.push_back(str); // put str into vector
	sort(my_strings.begin() , my_strings.end() );
	copy(my_strings.begin(), my_strings.end(), ostream_iterator<string>(cout, ", "));
	return 0;
}