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
		printf("%d��ż��\n", a);
		if (a % 4 == 0) {
			printf("%d��ż��\n\n", a / 2);
		}
		else {
			printf("%d������\n\n", a / 2);
		}
	}else {
		printf("%d������\n\n", a);
	}
	if (g == 0) {
		printf("%d��ż��\n", b);
		if (b % 4 == 0) {
			printf("%d��ż��\n\n", b/ 2);
		}
		else {
			printf("%d������\n\n", b / 2);
		}
	}
	else {
		printf("%d������\n\n", b);
	}
	if (h == 0) {
		printf("%d��ż��\n", c);
		if (c % 4 == 0) {
			printf("%d��ż��\n\n", c / 2);
		}
		else {
			printf("%d������\n\n", c / 2);
		}
	}
	else {
		printf("%d������\n\n", c);
	}
	if (i == 0) {
		printf("%d��ż��\n", d);
		if (d % 4 == 0) {
			printf("%d��ż��\n\n", d / 2);
		}
		else {
			printf("%d������\n\n", d / 2);
		}
	}
	else {
		printf("%d������\n\n", d);
	}
	if (j == 0) {
		printf("%d��ż��\n", e);
		if (e % 4 == 0) {
			printf("%d��ż��\n\n", e / 2);
		}
		else {
			printf("%d������\n\n", e / 2);
		}
	}
	else {
		printf("%d������\n\n", e);
	}
	

	return 0;

}