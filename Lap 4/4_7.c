//<4장 Programming 4번: 두 점 사이 거리 계산>
//작성자: 509 신 혜민(B889041)
//날짜 :2018년 9월 27일
//설명 : 두 점을 입력받아 두 점 사이의 거리를 계산
#include <math.h>
#include <stdio.h>

int main()
{
	int x1, y1,x2, y2;
	double Distance;

	printf("첫번째 점 (x1,y1): ");
	scanf("%d %d", &x1, &y1);

	printf("두번째 점 (x1,y1): ");
	scanf("%d %d", &x2, &y2);

	Distance = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
	printf("Distnace= %f", Distance);

	return 0;
}