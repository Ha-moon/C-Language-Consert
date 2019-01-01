#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,a,j,k,max=0;
	int random[ 100 ] = { 0 };
	int count[10] = { 0 };
	for (i = 0; i < 100; i++) {
		a=round() % 10;
		random[i] = a;
	}
	for (j = 0; j < 10; j++) 
		count[j] = sizeof(count)/sizeof(count[j]);
	for (k = 0; k < 10; k++) {
		if (count[k] > max)
			max = k+1;
	}
	printf("가장 많이 생성된 수=%d", max);
	return 0;
}