//<8�� Programming 8��: 2�� ������ �� ���>
//�ۼ���: 509, �� ����(B889041)
//��¥ : 2018�� 11�� 15��
//���� : 2�� �������� ���� ����ϴ� �Լ��� �ۼ��Ѵ�.

#include <stdio.h>
#include <math.h>
void quad_eqn();

int main()
{
	quad_eqn();
	return 0;
}

 void quad_eqn()
{
	int a, b, c;
	double value1, value2;
	printf("2�� �������� ����� �Է��Ͻÿ�:\n");
	printf("a: ");
	scanf("%d", &a);
	printf("b: ");
	scanf("%d", &b);
	printf("c: ");
	scanf("%d", &c);
	value1 = (-b + sqrt(b*b - 4 * a*c)) / (2 * a);
	value2 = (-b - sqrt(b*b - 4 * a*c)) / (2 * a);
	int k = b * b - 4 * a*c;
	if (k > 0) {
		printf("%f\n%f", value1,value2);
	}
	else {
		printf("���� ����");
	}

}