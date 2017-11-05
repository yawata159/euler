#include <stdio.h>

int main() {
	int N = 100;
	int ans = 0;
	int i, j;
	for (i = 1; i < N; i++)
		for (j = i+1; j <= N; j++)
			ans += i*j;
	ans *= 2;
	printf("%d\n", ans);
}
