//============================================================================
// Name        : Week3_Class2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Print(const vector<int> &a) {
	for (const auto &c : a) {
		cout << c << " ";
	}
}

int main() {
	int n;
	cin >> n;
	vector<int> range(n);
	for (auto &c : range) {
		cin >> c;
	}
	sort(range.begin(), range.end(), [](int x, int y){return abs(x) < abs(y);});
	Print(range);
	return 0;
}


