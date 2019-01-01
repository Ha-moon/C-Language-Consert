#include <stdio.h>

int main()
{
	int n;
	printf("몇 번이나 반복할까요?: ");
	scanf("%d", &n);
	int i = 0;
	while (i < n) {
		printf("안녕하세요\n");
		i++;
	}
	return 0;
}