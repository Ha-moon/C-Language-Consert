//<8�� Programming 13��: ��� ���α׷�>
//�ۼ���: 509, �� ����(B889041)
//��¥ : 2018�� 11�� 22��
//���� : ������� ���α׷��� �ۼ��Ͽ� ������ ����Ѵ�.

#include <stdio.h>

int sum(int n) {
	if (n == 1) return 1;
	else return n*n*n + sum(n - 1);
}

int main() {
	int x, result;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &x);
	result = sum(x);
	printf("%d", result);

	return 0;
}