#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main()
{
	int cash, bets=0;
	double RAND_MAX;
	printf("초기 금액 $50\n");
	printf("목표 금액 $250\n");
	while (cash != 0 && cash != 250) {
		bets++;
		if ((double)rand() / RAND_MAX < 0.5)
			cash++;
		else
			cash--;
	}
	return 0;
}
