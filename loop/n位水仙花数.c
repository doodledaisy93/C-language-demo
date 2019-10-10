#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int n;
	scanf ("%d", &n);
	int min = pow (10, n - 1);
	int max = pow (10, n);
	for (int x = min; x < max; x++) {
		int sum = 0;
		int t = x;
		for (int j = 1; j <= n; j++) {
			int d = t%10;
			sum += pow (d, n);
			t /= 10;
		}
		if (sum == x) {
				printf("%d\n", x);
		}
	}
	system ("pause");
	return 0;
}
