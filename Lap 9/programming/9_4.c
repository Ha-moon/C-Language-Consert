//<9�� Programming 4��: �Ǽ� ����/�Ҽ��� ������>
//�ۼ���: 509, �� ����(B889041)
//��¥ : 2018�� 11�� 29��
//���� : �Ǽ��� �����ο� �Ҽ��η� ����� �����ִ� �Լ��� �����.

#include <stdio.h>

void get(double value, int *i_part, double *f_part);

int main() {
	double a = 3.14;
	int n;
	double f;
	
	get(a, &n, &f);
	printf("������=%d\n", n);
	printf("�Ҽ���=%lf\n", f);
	return 0;
}

void get(double value, int *i_part, double *f_part) {
	*i_part = (int)value;
	*f_part = value - *i_part;
}