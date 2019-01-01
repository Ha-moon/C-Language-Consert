#include <stdio.h>
int main()
{
	char c;
	int a;
	int site[10] = { 0 };
	printf("좌석을 예약하시겠습니까?(y 또는 n) ");
	scanf("%c", &c);
	while (c == 'y') {
		if (c == 'y') {
			printf("---------------------\n");
			for (int i = 0; i < 10; i++)
				printf(" %d", i + 1);
			printf("\n---------------------\n");
			for (int j = 0; j < 10; j++)
				printf(" %d", site[j]);
			printf("\n몇번째 좌석을 예약하시겠습니까 ");
			scanf("%d", &a);
			site[a - 1]++;
			printf("예약되었습니다.\n");
		}
	}
	return 0;
}