//<8�� Programming 12��: ������ �� �ڸ��� ���>
//�ۼ���: 509, �� ����(B889041)
//��¥ : 2018�� 11�� 15��
//���� : ��� ȣ���� �̿��Ͽ� ������ �� �ڸ����� ����Ѵ�.

#include <stdio.h>
void show_digit(int x) {
		if (x > 10) {
			show_digit(x / 10);
			printf("%2d", x % 10);
		}
		else printf("%2d", x);
	}
	
int main() {
	int num;
	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &num);
	show_digit(num);
	return 0;
}