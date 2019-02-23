#include <bits/stdc++.h>

using namespace std;

int gcd(long int a, long int b)
{
	if( b == 0) {
		return a;
	} else {
		return gcd( b , a % b );
	}
}

int main()
{
	long int n;
	int t;

	cin >> t;

	while (t--) {
		cin >> n;
		for (long int i = n / 2; i > 0; i--) {
			if ( gcd (n, i) == 1) {
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}
