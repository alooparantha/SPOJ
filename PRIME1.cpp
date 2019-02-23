#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;

	cin >> t;

	while (t--) {
		long long int n, m;

		cin >>m >> n;

		for(long long int i = m; i <= n; i++) {
			long long int j;
			for (j = 2; j <= sqrt(i); j++) {
				if (i == 2 || i == 3) {
					cout << i << endl;
				}
				if( i % j == 0) {
				       break;	
				}
			}
			if (j > sqrt(i) && i != 1) {
				cout << i << endl;
			} 
		}
	}

	return 0;
}
