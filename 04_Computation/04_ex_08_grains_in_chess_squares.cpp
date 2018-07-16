#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iterator>
//#include "std_lib_facilities.h"
using namespace std;

tuple<int, int> calc_grain_in_sq(int min_grains) {
	
	int grains_total = 0;
	int squares      = 0;
	int grains_in_current_sq = 0;
	while (grains_total<=min_grains) {
		++squares;
		grains_in_current_sq = pow(2,squares-1);
		grains_total += grains_in_current_sq;
		//cout << squares << "--"<< grains_in_current_sq << "--"<< grains_total << "\n";
	}
	return make_tuple(squares, grains_total);
}

int main() {
	tuple<int, int> grains;
	int min_grains=0;

	for (int power = 1; power<=3; power++) 
		{
		min_grains = pow(1000,power);
		grains = calc_grain_in_sq (min_grains);
		cout << get<0>(grains) << " squares hold " << get<1>(grains) << " grains.\n";
	}
}
