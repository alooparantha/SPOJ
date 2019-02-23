#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	scanf("%d", &n);
	int result = sqrt(n);

	if (result * result == n) {
		printf("Yes");
	} else {
		printf("No");
	}
	
	return 0;
}

