// <6�� Programming 11�� ��ø �ݺ��� ���>
// �ۼ���: 509, �� ����(B889041)
// ��¥  : 2018�� 10�� 11��
// ����  : ������ �ϳ��� �ø��� ����Ѵ�.
#include<stdio.h>

int main()
{
	int n, i, j;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++)
			printf("%3d ", j);
		printf("\n");
	}
	return 0;
}