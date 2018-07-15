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
	cout << "Please enter your first name followed by your friend's name and age: ";
	string first_name = " ";
	string friend_name = " ";
	string conclusion = " ";
	int age;
	cin >> first_name >> friend_name >> age;
	if (age==17)
		conclusion = " Next year you'll be able to vote.";
	else if (age >=70)
		conclusion = " I hope you are enjoying your retirement.";

	if (age<=0 || age>=110)
		cerr << "You are kidding!!. Age can't be " << age;
	else 
		cout << "\nDear " << friend_name <<
		",\nHow are you doing?\nI hear you just had a birthday and you are " <<
		age << " years old. Next year you'll be " << age+1 
		<< " years old." << conclusion << "\nRegards,\n\n\n" << first_name;
	return 0;
}