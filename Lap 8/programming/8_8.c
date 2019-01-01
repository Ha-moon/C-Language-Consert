//<8장 Programming 8번: 2차 방정식 근 계산>
//작성자: 509, 신 혜민(B889041)
//날짜 : 2018년 11월 15일
//설명 : 2차 방정식의 근을 계산하는 함수를 작성한다.

#include <stdio.h>
#include <math.h>
void quad_eqn();

int main()
{
	quad_eqn();
	return 0;
}

 void quad_eqn()
{
	int a, b, c;
	double value1, value2;
	printf("2차 방정식의 계수를 입력하시오:\n");
	printf("a: ");
	scanf("%d", &a);
	printf("b: ");
	scanf("%d", &b);
	printf("c: ");
	scanf("%d", &c);
	value1 = (-b + sqrt(b*b - 4 * a*c)) / (2 * a);
	value2 = (-b - sqrt(b*b - 4 * a*c)) / (2 * a);
	int k = b * b - 4 * a*c;
	if (k > 0) {
		printf("%f\n%f", value1,value2);
	}
	else {
		printf("근이 없음");
	}

}