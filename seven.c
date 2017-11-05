#include <stdio.h>
#include <math.h>

int is_prime(int num) {
	int i;
	for (i = 2; i <= (int)(floor(sqrt((float)num))); i++)
		if (num % i == 0) 
			return 0;
	return 1;
}

int main() {
	int N = 10001;
	int nth = 2;
	int cur = 3;
	while (nth < N) {
		cur += 2;
		while (is_prime(cur) == 0)
			cur += 2;
		nth++;
	}
	printf("%d\n", cur);
	return 0;
}
