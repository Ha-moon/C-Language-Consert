#include <stdio.h>
int main()
{
	char c;
	int a;
	int site[10] = { 0 };
	printf("�¼��� �����Ͻðڽ��ϱ�?(y �Ǵ� n) ");
	scanf("%c", &c);
	while (c == 'y') {
		if (c == 'y') {
			printf("---------------------\n");
			for (int i = 0; i < 10; i++)
				printf(" %d", i + 1);
			printf("\n---------------------\n");
			for (int j = 0; j < 10; j++)
				printf(" %d", site[j]);
			printf("\n���° �¼��� �����Ͻðڽ��ϱ� ");
			scanf("%d", &a);
			site[a - 1]++;
			printf("����Ǿ����ϴ�.\n");
		}
	}
	return 0;
}