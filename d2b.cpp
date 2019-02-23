#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;

	deque <int> deq;

	cin >> n;

	while (n) {
		int x = n % 2;
		deq.push_front(x);
		n /= 2;
	}

	for (auto it = deq.begin(); it != deq.end(); it++) {
		cout << *it << " ";
	}

	cout <<endl;

	return 0;
}
