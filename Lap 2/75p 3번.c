// <2�� Programming 3��: �� ���� ����, ��հ� ���>
// �ۼ���: 509, �� ����(B889041)
// ��¥  : 2018�� 9�� 13��
// ����  : �� ���α׷��� ����ڷκ��� �� ���� ������ �Է¹��� ��, ��հ��� ����Ͽ� ȭ�鿡 ����Ѵ�.

#include <stdio.h>

int main()
{
	int x;
	int y;
	int z;
	int average;

	printf("������ �Է��Ͻÿ� :");
	scanf_s("%d", &x);

	printf("������ �Է��Ͻÿ� :");
	scanf_s("%d", &y);

	printf("������ �Է��Ͻÿ� :");
	scanf_s("%d", &z);

	average=(x + y + z) / 3;
	printf("����� %d �Դϴ�.", average);

	return 0;
}