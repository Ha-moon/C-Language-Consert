#include<stdio.h>

int main()
{
	char text;
	int count = 0;
	printf("���ڸ� �Է��Ͻÿ�: ");
	text = getchar();
	do {
		if (text == 'a') {
			count += 1;
		}
		printf("���ڸ� �Է��Ͻÿ�: (���� .)");
		text = getchar();
	} while (text != '.');
	printf("a�� ����=%d (���� .)", count);
	return 0;
}