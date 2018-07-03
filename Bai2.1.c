#include<stdio.h>

int main() {
	int n; // khai bao bien nguyen n
	scanf("%d", &n);
	// kiem tra n co thoa man n >= 0 ?
	if (n < 0) {
		puts("NOT_AVAILABLE");
	}
	else {
		int i;
		/* cach 1: chia du cho 2
		for (i = 0; i <= n; i++) {//in ra danh sach cac so chan
			if (i % 2 == 0) {
				printf("%d ", i);
			}
		}
		printf("\n");

		for (i = 0; i <= n; i++) { // in ra danh sach cac so le
			if (i % 2 != 0) {
				printf("%d ", i);
			}
		}
		printf("\n");
		*/

		/* cach 2: dung truc tiep vong lap */
		for (i = 0; i <= n; i += 2) {//in ra danh sach cac so chan
			printf("%d ", i);
		}
		printf("\n");

		for (i = 1; i <= n; i += 2) {//in ra danh sach cac so chan
			printf("%d ", i);
		}
		printf("\n");
	}

	return 0;
}