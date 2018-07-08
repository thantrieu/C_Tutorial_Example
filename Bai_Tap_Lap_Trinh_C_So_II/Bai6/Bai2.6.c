#include<stdio.h>

int main() {
	int n, k;
	scanf("%d%d", &n, &k);
	//check dk dau vao cua n, k
	if (n >= 0 && k > 0) {
		int sum = 0;
		int i;
		for (i = k; i <= n; i += k) {
			if (i % k == 0) {
				sum += i;
			}
		}

		// in kq
		printf("%d\n", sum);
	}
	else {
		puts("ERROR\n");
	}
	return 0;
}