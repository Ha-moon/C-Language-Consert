#include<stdio.h>

int get_array_sum(int *A, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += A[i];
	return sum;
}

int main() {
	printf("print_array()\n");
	int a[10] = { 1,2,3,4,5,6,7,8,9,0 };
	for (int j = 0; j < 10; j++)
		printf("%d ", a[j]);
	int result = get_array_sum(a, 10);
	printf("\n배열 요소의 합 = %d", result);
	return 0;
}