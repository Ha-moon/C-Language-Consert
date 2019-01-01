//<5장 Programming 5번: 근로 소득세 계산>
//작성자: 509 신 혜민(B889041)
//날짜 :2018년 10월 4일
//설명 : 사용자가 과세 표준 금액을 입력하면 근로 소득세를 계산
#include <stdio.h>

int main()
{
	int money, tax;
	printf("과세 표준을 입력하시오(만원): ");
	scanf("%d", &money);

	if (money > 8000)
		tax = 8000 * 0.26 + (money - 8000)*0.35;
	else if(money>4000)
		tax=4000*0.17+ (money - 4000)*0.26;
	else if (money > 1000)
		tax = 1000 * 0.08 + (money - 1000)*0.17;
	else
		tax = money*0.08;

	printf("소득세는 %d만원입니다\n", tax);
	return 0;
}