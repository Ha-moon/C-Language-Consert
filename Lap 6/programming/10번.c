#include <stdio.h>

int main()
{
	int f;
	int c;
	printf("======================\n");
	printf("ȭ���µ�	�����µ�\n");
	printf("======================\n");
	for (f = 0; f <= 100; f = f + 10) {
		c = (f - 32) * (5 / 9);
		printf("%d    %d\n", f, c);
	}
	return 0;
}