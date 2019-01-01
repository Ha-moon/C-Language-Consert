#include <stdio.h>

int main()
{
	char color;
	printf("신호등의 색깔 입력 (R,G,Y): ");
	color = getchar();
	if (color == 'r')
		printf("정지!");
	else if (color == 'g')
		printf("출발");
	else if (color == 'y')
		printf("주의");
	return 0;
}