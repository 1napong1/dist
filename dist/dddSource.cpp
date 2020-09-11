#include<stdio.h>
int main() {
	float a, b, c;
	scanf_s("%f", &a);
	scanf_s("%f", &b);
	scanf_s("%f", &c);
	if (a - b >= 0) {
		printf("%.2f\n", a - b);
	}
	else
	{
		printf("%.2f\n", b - a);
	}
	if (b - c >= 0) {
		printf("%.2f\n", b - c);
	}
	else {
		printf("%.2f\n", c - b);
	}if (a - c >= 0) {
		printf("%.2f\n", a - c);
	}
	else {
		printf("%.2f\n", c - a);
	}
}