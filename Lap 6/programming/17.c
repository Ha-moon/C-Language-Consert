#include <stdio.h>
int main()
{
	int n, i;
	printf("������ �Է��Ͻÿ�.: ");
	scanf("%d", &n);
	for (i = 2; i < n; i++) {
		if (n%i == 0) {
			printf("%d�� �Ҽ��� �ƴմϴ�.", n);
			break;
		}
		else {
			continue;
			printf("%d�� �Ҽ��Դϴ�,", n);
		}
	}
	return 0;
}