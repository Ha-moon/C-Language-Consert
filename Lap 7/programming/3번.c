#include <stdio.h>

int main()
{
	int i, j,sum=0;
	double avg;
	int score[3][3] = { {30,10,11},{40,90,32},{70,65,56} };
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			sum = sum + score[i][j];
			avg = (double)sum / 3;
		}
		printf("�й�%d�� ��������� %f�Դϴ�\n", i + 1, avg);
		sum = 0, avg = 0;
	}
	return 0;
}