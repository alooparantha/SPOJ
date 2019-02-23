#include <stdio.h>

int main ()
{
	int num1;
	int num2;
	int rev1;
	int rev2;
	int sum;
	int t;


	scanf("%d", &t);

	while (t--) {
		sum = 0;
		rev1 = 0;
		rev2 = 0;

		scanf("%d %d", &num1, &num2);

		while (num1 % 10 == 0) {
			num1 /= 10;
		}

		while (num2 % 10 == 0) {
			num2 /= 10;
		}

		while (num1) {
				int temp;

				temp = num1 % 10;
				rev1 = rev1 * 10 + temp;
				num1 /= 10;
			}
		while (num2) {
				int temp;

				temp = num2 % 10;
				rev2 = rev2 * 10 + temp;
				num2 /= 10;
			}

		sum = rev1 + rev2;

		int rev3;

		rev3 = 0;

		while (sum % 10 == 0) {
			sum /= 10;
		}

		while(sum) {
				int temp;

				temp = sum % 10;
				rev3 = rev3 * 10 + temp;
				sum /= 10;
			}

		printf("%d\n", rev3);
	}



	return 0;
}
