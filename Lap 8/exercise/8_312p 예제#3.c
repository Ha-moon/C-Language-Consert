//<8�� 312p ����#3:x�� y�� ���>
//�ۼ���: 509, �� ����(B889041)
//��¥ : 2018�� 11�� 08��
//���� : x�� y���� ����Ͽ� ��ȯ�Ѵ�.

#include <stdio.h>

int get_integer()
{
	int value;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &value);
	return value;
}

int power(int x, int y)
{
	int i;
	long result = 1;
	for (i = 0; i < y; i++)
		result *= x;
	return result;
}

int main(void)
{
	int x = get_integer();
	int y = get_integer();
	int result = power(x, y);
	printf("%d�� %d�� = %d \n", x, y, result);
	return 0;
}