//<8�� Programming 7��: �� ������ �Ÿ� ���>
//�ۼ���: 509, �� ����(B889041)
//��¥ : 2018�� 11�� 22��
//���� : �� �������� �Ÿ��� ����ϴ� �Լ��� �ۼ��Ѵ�.

#include <stdio.h>
#include <math.h>

double dist_2d()
{
	int x1,x2,y1,y2;
	printf("ù��° ���� ��ǥ�� �Է��Ͻÿ�:(x, y)");
	scanf("%d %d", &x1, &y1);
	printf("�ι�° ���� ��ǥ�� �Է��Ͻÿ�:(x, y)");
	scanf("%d %d", &x2, &y2);
	double d = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
	return d;
}

int main()
{
	double d = dist_2d();
	printf("���� ������ �Ÿ��� %f�Դϴ�.", d);
	return 0;
}