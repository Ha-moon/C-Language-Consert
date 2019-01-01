#include<stdio.h>
int main()
{
	double num[5] = { 0.0 };
	double sum=0.0,sum2=0.0;
	for (int i = 0; i < 5; i++) {
		printf("실수를 입력하시오: ");
		scanf("%1f", &num[i]);
		sum = sum + num[i];
	}
	double m = sum/ (double)5;
	printf("평균:%1f\n", m);
	
	for (int j = 0; j < 5; j++) {
		sum2 = sum2 + (num[j]-m)*(num[j] - m);
	}
	double v = sum2 / (double)5;
	printf("표준편차:%1f", v);
	return 0;
}