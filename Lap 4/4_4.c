//<4�� Programming 4��: �ڸ��� �и�>
//�ۼ���: 509 �� ����(B889041)
//��¥ :2018�� 9�� 27��
//���� : �� �ڸ��� �̷���� ���ڸ� �Է¹��� �� ������ �ڸ����� �и��Ͽ� ���
#include <stdio.h>

int main()
{
	int x;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &x);

	int site100 = x / 100;
	printf("���� �ڸ���: %d\n", site100);

	x = x % 100;
	int site10 = x / 10;
	printf("���� �ڸ���: %d\n", site10);

	int site1 = x % 10;
	printf("���� �ڸ���: %d", site1);

	return 0;
}