#include <stdio.h>
int main()
{
	for (int i = 1; i < 3; i++)
		for (int j = 3; j >= 1; j--)
			printf("%d���ϱ� %d�� %d\n", i, j, i*j);
	return 0;
}