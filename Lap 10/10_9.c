//<10�� Programming 9��: �ܾ� ���� ����>
//�ۼ���: 509, �� ����(B889041)
//��¥ : 2018�� 12�� 06��
//���� : ���ڿ� ���� �ܾ���� ������ ���� ���α׷��� �ۼ��Ѵ�.

#include <stdio.h>
#include <string.h>
int main() {
	char a[100];
	int i=0, count =0;
	gets_s(a, 99);
	while (a[i] != NULL) {
		if (a[i] == ' ') 
			count++;
		i++;
	}
	printf("�ܾ��� ���� : %d", count + 1);
	return 0;
}