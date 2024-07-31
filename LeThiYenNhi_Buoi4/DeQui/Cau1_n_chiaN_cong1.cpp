#include <stdio.h>

double tongNtrenNCong1(int n) {
	double kq; //
	if (n == 1) {
		kq = 1.0 / 2.0;
	}
	else {
		kq = (double)n / (n + 1) + tongNtrenNCong1(n - 1);
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
		double kq = tongNtrenNCong1(n);
		printf("Tong tu 1 den %d la: %.6f\n", n, kq);
	}

	return 0;
}