#include <bits/stdc++.h>

using namespace std;

int is_perfect_square(long int a) {
	long int x;
	x = sqrt(a);

	return (x*x == a);
}


int main() 
{
	int t;

	long int n;
	long int m;
	
//	set <long int> fact;

	cin >> t;
	int i = 1;



	while(t--) {
		cin >> n >> m;

		set <long int> fact;

		fact.insert(1);

		for (long int i = 2; i <= sqrt(n); i++) {
			if((n % i) == 0) {
				fact.insert(i);
				fact.insert(n/i);
			}
		}

		long int sum = 0;

		auto it = fact.begin();

		while (it != fact.end()) {
			sum += *it;
			it++;
		}

		long int devil = sum % m;

		int d;

		if ( devil == 0) {
			d = 0;
		} else {
			d = 1;
		}

		for (int i = 2; i <= sqrt(devil); i++) {
			if (devil % i == 0 ) {
					int x = devil / i;
					if (x *x == devil) {
						d++;	
					} else {
					  d += 2;
					}	
				
			} 
		}

		int ans = is_perfect_square(5*d*d + 4) || is_perfect_square(5*d*d -4);

		if (ans == 0) {
			cout << "Case #" << i++ << " : NO."<<endl;  
		} else {
			cout << "Case #" << i++ << " : YES."<<endl;
		}


		
		fact.erase(fact.begin(), fact.end());


	}

	return 0;

}
