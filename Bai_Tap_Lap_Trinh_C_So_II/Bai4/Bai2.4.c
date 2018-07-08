#include<stdio.h>

int main() {
	int n;
	// nhap n tu ban phim
	scanf("%d", &n);
	// kiem dieu kien dau vao
	if (n < 0) {
		puts("ERROR\n");
	}
	else {
		long s0 = 0, s1 = 0, s2 = 0;
		int i;
		/* cach 1: */
		/*
		for (i = 0; i <= n; i++) {
			s0 += i;
			if (i % 2 == 0) { // i la so chan
				s2 += i;
			}
			else { // i la so le
				s1 += i;
			}
		}
		*/
		// in ra man hinh
		/* cach 2: su dung cong thuc tinh cap so cong */

		s0 = n * (n + 1) / 2;
		int d = 2; // cong sai = 2 cho ca so chan, so le

		int sc = n / 2 + 1;
		int sl = n / 2;
		if (n % 2 != 0) {
			sl += 1;
		}

		s1 = sl * (2 * 1 + (sl - 1)*d) / 2;// tong cac so le trong doan 0->n
		s2 = sc * (2 * 0 + (sc - 1)*d) / 2;// tong cac so chan trong doan 0->n

		printf("%ld\n%ld\n%ld\n", s0, s1, s2);
	}
	return 0;
}