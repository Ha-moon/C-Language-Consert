#include <stdio.h>
#define month 12
int main()
{
	int i, a;
	int days[month] = { 31, 29, 31,30,31,30,31,31,30,31,30,31 };
	for (i=0;i<month;i++)
		printf("%d���� %d�� ���� �ֽ��ϴ�.\n",i+1,days[i]);
	return 0;
}