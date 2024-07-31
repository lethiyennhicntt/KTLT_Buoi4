#include <stdio.h>

double N_NhanNCong11(int n) {
	double kq;
	if (n == 1) {
		kq = 1.0 * 2.0;
	}
	else {
		kq = (double)n * (n + 1) + N_NhanNCong11(n - 1);
	}
	return kq;
}

int main() {
	int n;
	printf("Nhap n: ");
	scanf_s("%d", &n);

	if (n < 1) {
		printf("Gia tri n phai lon hon hoac bang 1.\n");
	}
	else {
		double kq = N_NhanNCong11(n);
		printf("Tong tu 1 den %d la: %.6f\n", n, kq);
	}

	return 0;
}
