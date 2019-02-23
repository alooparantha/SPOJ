#include <bits/stdc++.h>

using namespace std;

int main()
{
	int year;
	long long int n;

	cin >> year >> n;

	int Table [] = {0,1,1,2,1,2,2,3,1,2,2,3,2,3,3,4};

	long int count = 0;
	
	n = pow(2,year) - n;

	for(; n; n >>= 4) {
		count = count + Table[n & 0xF];
	}

	if (count % 2 == 0) {
		cout << "red" << endl;
	} else {
		cout << "blue" << endl;
	}
	
	return 0;
}
