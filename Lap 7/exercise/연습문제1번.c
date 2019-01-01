#include <stdio.h>
#define month 12
int main()
{
	int i, a;
	int days[month] = { 31, 29, 31,30,31,30,31,31,30,31,30,31 };
	for (i=0;i<month;i++)
		printf("%d월은 %d일 까지 있습니다.\n",i+1,days[i]);
	return 0;
}