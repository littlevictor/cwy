#include<stdio.h>
#include<stdlib.h>

int main() {
	
	int a, b, c, d, e, f, g, h, i, j;
	
	a = rand();
	b = rand();
	c = rand();
	d = rand();
	e = rand();

	f = a % 2;
	g = b % 2;
	h = c % 2;
	i = d % 2;
	j = e % 2;

	if (f == 0) {
		printf("%d是偶数\n", a);
		if (a % 4 == 0) {
			printf("%d是偶数\n\n", a / 2);
		}
		else {
			printf("%d是奇数\n\n", a / 2);
		}
	}else {
		printf("%d是奇数\n\n", a);
	}
	if (g == 0) {
		printf("%d是偶数\n", b);
		if (b % 4 == 0) {
			printf("%d是偶数\n\n", b/ 2);
		}
		else {
			printf("%d是奇数\n\n", b / 2);
		}
	}
	else {
		printf("%d是奇数\n\n", b);
	}
	if (h == 0) {
		printf("%d是偶数\n", c);
		if (c % 4 == 0) {
			printf("%d是偶数\n\n", c / 2);
		}
		else {
			printf("%d是奇数\n\n", c / 2);
		}
	}
	else {
		printf("%d是奇数\n\n", c);
	}
	if (i == 0) {
		printf("%d是偶数\n", d);
		if (d % 4 == 0) {
			printf("%d是偶数\n\n", d / 2);
		}
		else {
			printf("%d是奇数\n\n", d / 2);
		}
	}
	else {
		printf("%d是奇数\n\n", d);
	}
	if (j == 0) {
		printf("%d是偶数\n", e);
		if (e % 4 == 0) {
			printf("%d是偶数\n\n", e / 2);
		}
		else {
			printf("%d是奇数\n\n", e / 2);
		}
	}
	else {
		printf("%d是奇数\n\n", e);
	}
	

	return 0;

}