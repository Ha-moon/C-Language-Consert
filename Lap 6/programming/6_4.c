// <6�� Programming 4�� ���� ���ϱ�>
// �ۼ���: 509, �� ����(B889041)
// ��¥  : 2018�� 10�� 11��
// ����  : ����ڷκ��� ������ �Է¹޾� ��� ���Ѵ�. 0�� �Է��ϸ� �հ踦 ����ϰ� �����Ѵ�.
#include <stdio.h>

int main()
{
	int n=1;
	int sum = 0;
	while (n != 0) {
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d", &n);
		sum = sum + n;
	}
	printf("�հ�=%d", sum);
	return 0;
}