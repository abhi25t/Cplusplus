#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	cout << "Enter your word sequence:\n";
	string previous = " "; // previous word; initialized to “not a word”
	string current; // current word
	while (cin>>current) { // read a stream of words
		if (previous == current) // check if the word is the same as last
			cout << "repeated word: " << current << '\n';
	previous = current;
	}
}