#include <stdio.h>

int main()
{
	int i, n;
	printf("정수를 입력하시오: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		if (n%i == 0)
			printf("%d ", i);
		else
			continue;
	}
	return 0;
}