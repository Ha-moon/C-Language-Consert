#include <stdio.h>
void reverse(int *A) {
	printf("����: ");
	for (int i = 4; i >= 0; i--)
		printf(" %d", A[i]);
}

int main() {
	int a[5] = {0};
	printf("5���� ������ �Է��Ͻÿ�: ");
	for (int j = 0; j < 5; j++)
		scanf(" %d", &a[j]);
	reverse(a);

	return 0;
}