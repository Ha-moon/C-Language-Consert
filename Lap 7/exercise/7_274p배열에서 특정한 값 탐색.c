//<7�� 274p:�迭���� Ư���� �� Ž��>
//�ۼ���: 509, �� ����(B889041)
//��¥ : 2018�� 10�� 25��
//���� : �迭���� Ư���� ���� Ž���Ѵ�.
#include <stdio.h>
#define SIZE 100000
#include <stdlib.h>

int main()
{
	long key, i, j;
	long list[SIZE] = { 0 };
	printf("[ ");
	for (i = 0; i < SIZE; i++) {
		list[i] = rand();
	}
	for (j = 0; j < 30; j++) {
		printf("%d ", list[j]);
	}
	printf("]\n");

	printf("Ž���� ���� �Է��Ͻÿ�:");
	scanf_s("%d", &key);

	for (i = 0; i < SIZE; i++) {
		if (list[i] == key) {
			printf("Ž�� ���� �ε���= %d\n", i);
			break;
		}
	}
	return 0;
}