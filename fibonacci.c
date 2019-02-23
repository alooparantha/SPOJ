#include <stdio.h>

int main ()
{
	long long int fib[100];

	long long int f;
	long long int s;
	long long int t;

	f = 0;
	s = 1;
	t = f + s;
	fib[0] = 0;
	fib[1] = 1;
	fib[2] = 1;

	for ( int i = 3; i < 100; i++) {
		f = s;
		s = t;
		t = f + s;
		fib[i] = t;
	}

	for (int i = 0; i < 100; i++) {
		printf("%lld ",fib[i]);
	}

	return 0;
}
