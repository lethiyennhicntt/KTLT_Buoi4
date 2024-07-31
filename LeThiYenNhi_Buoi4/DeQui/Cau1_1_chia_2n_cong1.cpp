#include <stdio.h>

double chia2nCong1(int n) {
	double kq;
	if (n == 1) {
		kq = 1.0 / 3.0;
	}
	else {
		kq = 1.0 / (2 * n + 1) + chia2nCong1(n - 1);
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
		double kq = 1.0 + chia2nCong1(n - 1);
		printf("Tong tu 1 den %d la: %.6f\n", n, kq);
	}

	return 0;
}