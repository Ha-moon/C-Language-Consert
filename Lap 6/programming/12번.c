#include<stdio.h>

int main()
{
	int n, i, j;
	for (i = 1; i <= 10; i++) {
		printf("�����͸� �Է��Ͻÿ�:");
		scanf("%d", &n);
		for (j = 1; j <= n; j++)
			printf("*\n");
	}
	return 0;
}