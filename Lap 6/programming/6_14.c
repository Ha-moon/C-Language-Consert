// <6�� Programming 14�� �������� ���>
// �ۼ���: 509, �� ����(B889041)
// ��¥  : 2018�� 10�� 18��
// ����  : �������� ���� ����Ͽ� ����Ѵ�.
#include<stdio.h>

int main()
{
	int i, n;
	int result = 0;
	printf("n�� ���� �Է��Ͻÿ�: ");
	scanf("%d", &n);
	for (i = 0; i <= n; i++)
		result += i*i;
	printf("��갪�� %d�Դϴ�.", result);
	return 0;
}