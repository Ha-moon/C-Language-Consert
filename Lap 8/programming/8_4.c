//<8�� Programming 4��: ������ ��� ã��>
//�ۼ���: 509, �� ����(B889041)
//��¥ : 2018�� 11�� 08��
//���� : �־��� ������ ����� ã�Ƽ� ����Ѵ�.

#include <stdio.h>

void get_divisor(int x)
{
	printf("%d�� ���=", x);
	for (int i = 1; i <= x; i++) {
		if (x%i == 0)
			printf("%d ", i);
		else
			continue;
	}
}

int main() {
	get_divisor(10);
	return 0;
}