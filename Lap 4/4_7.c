//<4�� Programming 4��: �� �� ���� �Ÿ� ���>
//�ۼ���: 509 �� ����(B889041)
//��¥ :2018�� 9�� 27��
//���� : �� ���� �Է¹޾� �� �� ������ �Ÿ��� ���
#include <math.h>
#include <stdio.h>

int main()
{
	int x1, y1,x2, y2;
	double Distance;

	printf("ù��° �� (x1,y1): ");
	scanf("%d %d", &x1, &y1);

	printf("�ι�° �� (x1,y1): ");
	scanf("%d %d", &x2, &y2);

	Distance = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
	printf("Distnace= %f", Distance);

	return 0;
}