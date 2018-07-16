#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iterator>
//#include "std_lib_facilities.h"
#include <limits>
using namespace std;

tuple<int, double> calc_grain_in_sq(double min_grains) { //
	
	int squares      = 0;
	double grains_total = 0;  //
	double grains_in_current_sq = 0;   //
	while (grains_total<=min_grains) {
		++squares;
		grains_in_current_sq = pow(2,squares-1);
		grains_total += grains_in_current_sq;
		//cout << squares << "--"<< grains_in_current_sq << "--"<< grains_total << "\n";
	}
	return make_tuple(squares, grains_total);
}

int main() {	
	const int    max_int    = numeric_limits<int>::max();
	const double max_double = numeric_limits<double>::max();	
	
	cout << "int's Limit: "   << max_int    << "\n";
	cout << "double's Limit:" << max_double << "\n";
	
	int max_int_log2 = log2(max_int);
	cout << max_int_log2 << " squares maximum for int\n";
	
	int max_dbl_log2 = log2(max_double);
	cout << max_dbl_log2 << " squares maximum for double\n----------\n";
	
	tuple<int, double> grains;    //
	double min_grains=0;

	for (int power = 1; power<=30; power++) 
		{
		min_grains = pow(1000,power);
		grains = calc_grain_in_sq (min_grains);
		cout << get<0>(grains) << " squares hold " << get<1>(grains) << " grains.\n";
	}
}
