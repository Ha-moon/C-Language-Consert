#include <stdio.h>

int main()
{
	int i = 0;
	for (; ; )
	{
		if (i > 10)
			break;
		if (i < 6)
			continue;
		printf("%d", i);
		i++;
	}

	return 0;
}