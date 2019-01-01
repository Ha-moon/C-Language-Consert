#include<stdio.h>
#include<math.h>

void quadratic(int a, int b, int c, double* xplus, double* xminus) {
	*xminus = (-b - sqrt(b*b - 4 * a*c)) / (2 * a);
	*xplus = (-b + sqrt(b*b - 4 * a*c)) / (2 * a);
}

int main() {
	int a = 1;
	int b = 4;
	int c = 3;
	double x1 = 0, x2 = 0;

	quadratic(a, b, c, &x1, &x2);
	printf("ù��° �Ǳ�: %lf\n", x1);
	printf("�ι�° �Ǳ�: %lf", x2);
	return 0;
}