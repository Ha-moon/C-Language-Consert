#include <stdio.h>

int main()
{
	char color;
	printf("��ȣ���� ���� �Է� (R,G,Y): ");
	color = getchar();
	if (color == 'r')
		printf("����!");
	else if (color == 'g')
		printf("���");
	else if (color == 'y')
		printf("����");
	return 0;
}