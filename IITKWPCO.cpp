#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;

	cin >> t;

	while (t--) {

		int n,n1;

		cin >> n;

		n1 = n;

		vector <long long int> vec;

		long long int data;

		while (n--) {
			cin >> data;

			vec.push_back(data);
		}

		sort(vec.begin(), vec.end());

		array <int, 100> visited;

		visited = {0};


		int val;
		val = 0;

		for (int i = 0; i < n1; i++) {
			for(int j = 0; j < n1 && visited[i] == 0; j++) {
				if((vec[i] == vec[j] * 2 || vec[j] == vec[i] * 2) && visited[j] == 0 ) {
					visited[i] = 1; 
					visited[j] = 1;
					val++; 
				}
			}
			
		}

		cout << val << endl;
	}
}
