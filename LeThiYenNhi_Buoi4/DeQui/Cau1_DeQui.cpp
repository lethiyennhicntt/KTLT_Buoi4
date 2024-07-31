#include <stdio.h>

int tongTu1DenN(int n) {
	int kq;
	if (n == 1) {
		kq = 1;
	}
	else {
		kq = n + tongTu1DenN(n - 1);
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
		printf("Tong tu 1 den %d la: %d\n", n, tongTu1DenN(n));
	}

	return 0;
}