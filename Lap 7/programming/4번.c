#include <stdio.h>
int main()
{
	int i, j,a,b;
	int multiplication_table[9][9] = { 0 };
	for (i = 1; i < 10; i++) {
		for (j = 1; j < 10; j++)
			multiplication_table[i][j] = i * j;
	}
	printf("�˰���� �������� �Է��Ͻÿ�(��; 9 3): ");
	scanf("%d %d", &a, &b);
	printf("%dX%d=%d", a, b, multiplication_table[a][b]);
	return 0;
}