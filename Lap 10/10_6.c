//<10�� Programming 6��: �ؽ�Ʈ �빮�� ���>
//�ۼ���: 509, �� ����(B889041)
//��¥ : 2018�� 12�� 06��
//���� : �ؽ�Ʈ�� ��� �빮�ڷ� ����ϴ� ���α׷��� �ۼ��Ѵ�.

#include <stdio.h>

int main() {
	char a[100];
	int i = 0;
	printf("�ؽ�Ʈ�� �Է��Ͻÿ�:");
	gets_s(a, 99);
	while (a[i] != NULL) {
		if ('a' <= a[i] <= 'z') {
			a[i] = toupper(a[i]);
		}
		i++;
	}
	printf("�빮�� ���:%s",a);
	return 0;
}