//<7�� 272p:���� ��� ���� ã��>
//�ۼ���: 509, �� ����(B889041)
//��¥ : 2018�� 10�� 25��
//���� : ���� ��� ������ ã�´�.

#include <stdio.h>
#define SIZE 10000
#include <stdlib.h>
#include <limits.h>

int main()
{
	int prices[SIZE] = { 0 };
	int i, maximum,j;

	for (j = 0; j < 30; j++) {
		printf("%d ", prices[j]);
	}
	printf("]\n");

	for (i = 0; i < SIZE; i++) {
		prices[i] = rand();
	}

	maximum = INT_MIN;

	for (i = 1; i < SIZE; i++) {
		if (prices[i] > maximum)
			maximum = prices[i];
	}
	printf("�ִ밪�� %d�Դϴ�.\n", maximum);
	return 0;
}