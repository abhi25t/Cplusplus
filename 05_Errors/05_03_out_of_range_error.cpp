#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iterator>
using namespace std;

int main() {
	vector<int> v; // a vector of ints
	for (int x; cin>>x; )
		{v.push_back(x);} // set values
	//Print entire vector below
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, ", "));
	cout << "\n" << v[v.size()+3] << "\n"; 	
	// [] operator doesn't catch error
	// http://www.cplusplus.com/forum/beginner/171880/
	
	for (int i = 0; i<=v.size(); ++i) // print values
		cout << "v[" << i <<"] == " << v[i] << '\n';	
	
	try {
		for (int i = 0; i<=v.size(); ++i) // print values
			cout << "v[" << i << "] = " << v.at(i) << "\n";
	} catch (out_of_range) {
		cerr << "Oops! Range error\n";
		return 1;
	} catch (...) { // catch all other exceptions
		cerr << "Exception: something went wrong\n";
		return 2;
	}
}