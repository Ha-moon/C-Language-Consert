#include<stdio.h>

int main()
{
	char text;
	int count = 0;
	printf("문자를 입력하시오: ");
	text = getchar();
	do {
		if (text == 'a') {
			count += 1;
		}
		printf("문자를 입력하시오: (종료 .)");
		text = getchar();
	} while (text != '.');
	printf("a의 개수=%d (종료 .)", count);
	return 0;
}