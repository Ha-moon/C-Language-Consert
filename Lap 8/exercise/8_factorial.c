//<8�� 326p: ��ȯȣ���Լ�>
//�ۼ���: 509, �� ����(B889041)
//��¥ : 2018�� 11�� 22��
//���� : factorial�� ��ȯȣ���� �����Ѵ�.

#include <stdio.h>
long factorial(int n);

int main() {
	int x = 0, result;
	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &x);
	result = factorial(x);
	printf("%d!�� %d�Դϴ�\n", x, result);
	return 0;
}

int factorial(int n) {
	int f;
	printf("%d\n", n); // �Է� �μ��� ����غ��� 
	if (n == 1) 
		f = 1;
	else 
		f = n * factorial(n - 1);

	printf("n=%d, f=%d\n", n, f); // ��� �� ��� �غ���. 
	return f;
}