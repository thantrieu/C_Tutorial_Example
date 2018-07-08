#include<stdio.h>

int main() {
	// khai bao bien n
	int n;
	// nhap n:
	scanf("%d", &n);

	if (n < 0) {
		puts("ERROR\n");
	}
	else {
		float sum = 0;
		int i;
		for (i = 1; i <= n; i++) {
			sum += 1.0 / i;// ep kieu sang so thuc
		}
		printf("%0.5f\n", sum);
	}

	return 0;
}