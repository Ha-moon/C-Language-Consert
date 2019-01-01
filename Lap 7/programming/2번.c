#include <stdio.h>
#include <limits.h>
#define size 5
int main()
{
	int i, j,max=0,min=INT_MAX;
	int number[size] = { 0 };
	for (i = 0; i < size; i++) {
		printf("정수를 입력하시오: ");
		scanf("%d", &number[i]);
		if (number[i] > max)
			max = number[i];
	}
	for (j = 0; j < size; j++) {
		if (number[j] < min)
		min = number[j];
	}
	printf("최대값=%d, 최소값=%d", max, min);
		
	return 0;
}