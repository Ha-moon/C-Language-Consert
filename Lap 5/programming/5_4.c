// <5�� Programming 4�� �ﰢ�� ����>
// �ۼ���: 509, �� ����(B889041)
// ��¥  : 2018�� 10�� 04��
// ����  : �ﰢ�� �� ���� ���̸� �Է� �޾Ƽ� �ﰢ���� ������ ����
#include <stdio.h>

int main()
{
	int a, b, c;
	printf("�ﰢ���� ������ �Է��Ͻÿ�:\n");
	scanf("%d %d %d", &a, &b, &c);
	if (a == b || b == c || c == a) {
		if (a == b == c)
			printf("���ﰢ��");
		else
			printf("�̵ �ﰢ��");
	}
	else
		printf("�Ϲ� �ﰢ��");
	return 0;
}