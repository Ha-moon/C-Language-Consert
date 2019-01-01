//<10장 Programming 6번: 텍스트 대문자 출력>
//작성자: 509, 신 혜민(B889041)
//날짜 : 2018년 12월 06일
//설명 : 텍스트를 모두 대문자로 출력하는 프로그램을 작성한다.

#include <stdio.h>

int main() {
	char a[100];
	int i = 0;
	printf("텍스트를 입력하시오:");
	gets_s(a, 99);
	while (a[i] != NULL) {
		if ('a' <= a[i] <= 'z') {
			a[i] = toupper(a[i]);
		}
		i++;
	}
	printf("대문자 출력:%s",a);
	return 0;
}