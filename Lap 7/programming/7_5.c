//<7�� programming 5��: ���� ���� ������ �� ���>
//�ۼ���: 509, �� ����(B889041)
//��¥ : 2018�� 11�� 01��
//���� : ������ �����Ͽ� ���� ���� ������ ���� ���

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[100];
	int b[10] = { 0 };
	for (int i = 0; i < 100; i++)
		a[i] = rand() % 10;
	for (int j = 0; j < 100; j++){
		if (a[j] == j)
			b[j]++;
	}
	int max = 0;
	for (int k = 0; k < 10; k++){
		if (b[k]>max)
			max = k;
	}
	printf("���� ���� ������ ��=%d", max);
	
	return 0;
}