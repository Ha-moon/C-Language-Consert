#include<stdio.h>

int main()
{
	float oil, after=500;
	printf("�ʱ⿬�ᷮ: 500\n");
	while (after > 50) {
		printf("���� ������ +, �Ҹ�� -�� �Է����ּ���: ");
		scanf("%f", &oil);
		after += oil;
		printf("���� �����ִ� ���� %f�Դϴ�.\n",after);
	}
	printf("\n(���) ���ᰡ 10�ۼ�Ʈ �����Դϴ�.");
	return 0;
}