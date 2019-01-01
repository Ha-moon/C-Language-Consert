#include<stdio.h>

int main()
{
	int n, i, j;
	for (i = 1; i <= 10; i++) {
		printf("데이터를 입력하시오:");
		scanf("%d", &n);
		for (j = 1; j <= n; j++)
			printf("*\n");
	}
	return 0;
}