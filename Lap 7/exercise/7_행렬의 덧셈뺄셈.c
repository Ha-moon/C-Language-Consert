//<7장 285p Lap: 행렬의 덧셈>
//작성자: 509, 신 혜민(B889041)
//날짜 : 2018년 12월 06일
//설명 : 2차원 배열의 프로그램을 이해하고 실행해 본다.

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