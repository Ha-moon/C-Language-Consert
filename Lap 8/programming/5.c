#include <stdio.h>
int prime()
{
	for (int i = 2; i <= 100; i++) {
		for (int j = 2; j <= i-1; j++) {
			if (j == i)
				continue;
			else if (j != i)
				if (j%i == 0) //¼Ò¼ö¾Æ´Ô
					break;
				else
					continue;
			printf("%d ", i);
		}
	}
	return 0;
}

int main() {
	prime();
	return 0;
}