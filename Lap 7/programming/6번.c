#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,j;
	int dice [60000] = { 0 };
	int count[6] = { 0 };
	printf("================\n");
	printf("¸é        ºóµµ\n");
	printf("================\n");
	for (j = 0; j < 60000; j++) {
		int num = rand() % 6;
		dice[j] = num;
		if (dice[j] = 0)
			count[0]++;
		else if (dice[j] = 1)
			count[1]++;
		else if (dice[j] = 2)
			count[2]++;
		else if (dice[j] = 3)
			count[3]++;
		else if (dice[j] = 4)
			count[4]++;
		else if (dice[j] = 5)
			count[5]++;
	}

	for (i = 0; i < 6; i++)
		printf("%d      %d\n", i, count[i]);
	return 0;
}