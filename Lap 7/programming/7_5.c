//<7장 programming 5번: 가장 많이 생성된 수 출력>
//작성자: 509, 신 혜민(B889041)
//날짜 : 2018년 11월 01일
//설명 : 난수를 생성하여 가장 많이 생성된 수를 출력

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
	printf("가장 많이 생성된 수=%d", max);
	
	return 0;
}