#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	int n;

	cin >> t;

	while (t--) {
		cin >> n;

		int data;

		for (int i = 0; i < n; i++) {
			cin >> data;

			if (data < 0) {
				cout << data << " ";
			} else if (data >=0 && data < 3) {
				cout << data - 4 << " ";
			} else if (data >= 3 && data < 5) {
				cout << "-4" << " ";
			}else if (data == 5) {
				cout << "-3" << " ";
			} else if (data >= 6) {
				cout << "-4" << " ";
			}
		}

		cout << endl;
	}

	return 0;
}
