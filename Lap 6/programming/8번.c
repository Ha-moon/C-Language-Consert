#include <stdio.h>

int main()
{
	int x, x1, y, sum;
	sum = 0;
	printf("��������: ");
	scanf("%d", &x);
	x1 = x;
	printf("��������: ");
	scanf("%d", &y);

	for (; x <= y; x++)
		sum = sum + x;
	printf("Sum of %d to %d = %d", x1, y, sum);

	return 0;
}