//<7�� : ���� ��������>
//�ۼ���: 509, �� ����(B889041)
//��¥ : 2018�� 11�� 01��
//���� : ������ �����Ͽ� �������ķ� �����Ѵ�.

#include <stdio.h>
#define SIZE 10000
#include <stdlib.h>

int main(){
	int i,k,j;
	int list[SIZE];
	for (j = 0; j < SIZE; j++)
		list[j] = rand();
	for (k = 0; k < SIZE; k++){
		for (i = 0; i < SIZE - 1; i++){
			if (list[i]>list[i + 1]){
				int tmp = list[i];
				list[i] = list[i + 1];
				list[i + 1] = tmp;
			}
		}
	}
	for (i = 0; i < SIZE; i++){
		printf("%d ", list[i]);
	}
	return 0;
}