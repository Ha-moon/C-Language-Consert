#include<stdio.h>

int main()
{
	float oil, after=500;
	printf("초기연료량: 500\n");
	while (after > 50) {
		printf("연료 충전은 +, 소모는 -로 입력해주세요: ");
		scanf("%f", &oil);
		after += oil;
		printf("현재 남아있는 양은 %f입니다.\n",after);
	}
	printf("\n(경고) 연료가 10퍼센트 이하입니다.");
	return 0;
}