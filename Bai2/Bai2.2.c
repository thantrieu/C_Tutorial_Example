#include<stdio.h>

int main() {
	int n;
	// nhap du lieu vao tu ban phim
	scanf("%d", &n);
	// kiem tra n co hop le?
	if (n < 0) {
		puts("ERROR");
	}
	else {
		int i, s = 0;
		/* cach 1: su dung cong thuc tinh cap so cong */
		s = n * (n + 1) / 2;

		/* cach 2: su dung vong lap 
		for (i = 0; i <= n; i++) {
			s += i;
		}
		*/
		printf("%d\n", s);
	}
	return 0;
}