// <6�� Programming 19�� �Ǻ���ġ ����>
// �ۼ���: 509, �� ����(B889041)
// ��¥  : 2018�� 10�� 18��
// ����  : �Ǻ���ġ ������ ����Ѵ�.
#include <stdio.h>
int main()
{
	int n;
	printf("���° �ױ��� ���ұ��? ");
	scanf("%d", &n);
	int a = 0, b = 1,c,i=0;
	while (i <= n) {
		printf("%d, ", a);
		c = a + b;
		a = b;
		b = c;
		i++;
	}

	return 0;
}