// <5�� Programming 7�� ���� ������ �� ���>
// �ۼ���: 509, �� ����(B889041)
// ��¥  : 2018�� 10�� 04��
// ����  : ����� �Է¹޾� ���� �������� ���� ����Ѵ�.
#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, x, x1, x2;
	printf("��� a�� �Է��Ͻÿ� : ");
	scanf("%f", &a);
	printf("��� b�� �Է��Ͻÿ� : ");
	scanf("%f", &b);
	printf("��� c�� �Է��Ͻÿ� : ");
	scanf("%f", &c);
	if (a == 0) {
		x = -c / b;
		printf("���� ���� �������� �߱��� %f�Դϴ�", x);
	}
	else if ((b*b - 4 * a*c) < 0){
		printf("�Ǳ��� �������� �ʽ��ϴ�");
	}
	else {
		x1 = (-b + sqrt(b*b - 4 * a*c)) / (2 * a);
		x2 = (-b - sqrt(b*b - 4 * a*c)) / (2 * a);
		printf("���� ���� �������� �Ǳ��� %f�� %f�Դϴ�", x1, x2);
	}
	return 0;
}