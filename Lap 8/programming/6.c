#include <stdio.h>
int get_int() {
	int value;
	scanf("%d", &value);
	return value;
}
int ipower(int n, int k) {
	for (int j = 0; j <= k; j++) {
		long result = 1;
		for (int i = 1; i <= j; i++)
			result *= n;
		printf("%d\n", result);
	}
	return;
}

int main() {
	int n = get_int();
	int k = get_int();
	ipower(n, k);
}