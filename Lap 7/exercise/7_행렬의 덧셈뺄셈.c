//<7�� 285p Lap: ����� ����>
//�ۼ���: 509, �� ����(B889041)
//��¥ : 2018�� 12�� 06��
//���� : 2���� �迭�� ���α׷��� �����ϰ� ������ ����.

#include <stdio.h>
#define ROWS 3
#define COLS 3
int main() {
	int r, c;

	int A[ROWS][COLS] = { {2,3,0},{3,2,0},{3,0,2} };
	int B[ROWS][COLS] = { {2,4,0},{0,2,4},{0,4,2} };
	int C[ROWS][COLS];

	for (r = 0; r < ROWS; r++) {
		for (c = 0; c < COLS; c++) {
			C[r][c] = A[r][c] - B[r][c];
			printf("%d ", C[r][c]);
		}
		printf("\n");
	}
	return 0;
}