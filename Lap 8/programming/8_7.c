//<8장 Programming 7번: 두 점사이 거리 계산>
//작성자: 509, 신 혜민(B889041)
//날짜 : 2018년 11월 22일
//설명 : 두 점사이의 거리를 계산하는 함수를 작성한다.

#include <stdio.h>
#include <math.h>

double dist_2d()
{
	int x1,x2,y1,y2;
	printf("첫번째 점의 좌표를 입력하시오:(x, y)");
	scanf("%d %d", &x1, &y1);
	printf("두번째 점의 좌표를 입력하시오:(x, y)");
	scanf("%d %d", &x2, &y2);
	double d = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
	return d;
}

int main()
{
	double d = dist_2d();
	printf("두점 사이의 거리는 %f입니다.", d);
	return 0;
}