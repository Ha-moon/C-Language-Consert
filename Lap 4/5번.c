#include <stdio.h>

int main()
{
	float x, y;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%f", &x);
	y = ((double)(x*x*x - 20) / (x - 7));
	printf("������ ���� %f�Դϴ�", y);
	return 0;
}