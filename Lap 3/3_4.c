//<3�� Programming 4��: �������͸� ������ ȯ���Ͽ� ���>
//�ۼ���: 509 �� ����(B889041)
//��¥ :2018�� 9�� 20��
//���� : ����ڿ��� �������͸� ���� �� ������ ȯ���Ͽ� ����Ѵ�.

#include <stdio.h>
#define EXCHANGE_SPACE 0.3025

int main()
{
	float m;
	float size;
	printf("������ �������� ������ �Է��Ͻÿ�: ");
	scanf_s("%f", &m);
	size = EXCHANGE_SPACE * m;
	printf("%f�������ʹ� %f���Դϴ�.", m, size);

	return 0;
}