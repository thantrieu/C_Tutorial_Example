#include<stdio.h>
#include<math.h>

int main() {
	// khai bao bien
	int m, n, count = 0, i;
	// nhap du lieu 
	scanf("%d%d", &m, &n);
	// kiem tra m<= n? cac gia tri can kiem tra co duong?
	if (m > n || ((m <= n) && n < 0)) { // kiem tra co thoa dieu kien
		puts("NOT_AVAILABLE\n");
	}
	else {// truong hop m<=n va n>=0
		for (i = m; i <= n; i++) {
			int k = (int)sqrt(i);
			if (i == k * k) {
				printf("%d ", i);
				count++;
			}
		}
		if (count == 0) {
			puts("NOT_AVAILABLE\n");
		}
		else {
			printf("\n%d\n", count);
		}
	}
	return 0;
}