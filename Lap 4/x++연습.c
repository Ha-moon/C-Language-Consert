#include <stdio.h>

int main()
{
	int x, y,nextx,nexty;

	x = 1;
	y = 1;
	nextx = ++x;
	nexty = y++;
	printf("x=%d y=%d nextx=%d nexty=%d", x, y, nextx, nexty);

	return 0;
}