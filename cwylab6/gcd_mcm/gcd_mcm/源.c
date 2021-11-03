//程伟业 2021280396
#include<stdio.h>

int gnd(int x, int y) {
	return y ? gnd(y, x % y) : x;
}

int mcm(int x, int y, int z) {
	return x * y / z;
}

int main() {
	int _gnd, _mcm, x, y;
	scanf_s("%d", &x);
	scanf_s("%d", &y);
	_gnd = gnd(x, y);
	_mcm = mcm(x, y, _gnd);
	printf("%d与%d的最大公因数是%d，最小公倍数是%d", x, y, _gnd, _mcm);
}