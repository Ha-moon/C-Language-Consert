#include <stdio.h>
void reverse(int *A) {
	printf("역순: ");
	for (int i = 4; i >= 0; i--)
		printf(" %d", A[i]);
}

int main() {
	int a[5] = {0};
	printf("5개의 정수를 입력하시오: ");
	for (int j = 0; j < 5; j++)
		scanf(" %d", &a[j]);
	reverse(a);

	return 0;
}