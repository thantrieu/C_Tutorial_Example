#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	// ktra n
	if (n < 0) {
		puts("ERROR\n");
	}
	else {
		unsigned long long sum = 1, factor = 1;
		int i;
		for (i = 1; i <= n; i++) {
			factor *= i;// tinh i!
			sum += factor;
		}

		//in ra kq
		printf("%llu\n", sum);
	}

	return 0;
}