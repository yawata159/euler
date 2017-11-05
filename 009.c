#include <stdio.h>
#include <math.h>

int is_prime(unsigned long num) {
	int i;
	for (i = 2; i <= (unsigned long)(floor(sqrt((double)num))); i++)
		if (num % i == 0) 
			return 0;
	return 1;
}

int main() {
	int N = 2000000; // greater than 2
	unsigned long ans = 2;

	unsigned long cur;
	for (cur = 3; cur < N; cur += 2) {
		if (is_prime(cur)) {
			ans += cur;
		}
	}

	printf("%lu\n", ans);
	return 0;
}
