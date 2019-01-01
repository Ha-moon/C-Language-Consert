//<10장 Programming 9번: 단어 개수 세기>
//작성자: 509, 신 혜민(B889041)
//날짜 : 2018년 12월 06일
//설명 : 문자열 안의 단어들의 개수를 세는 프로그램을 작성한다.

#include <stdio.h>
#include <string.h>
int main() {
	char a[100];
	int i=0, count =0;
	gets_s(a, 99);
	while (a[i] != NULL) {
		if (a[i] == ' ') 
			count++;
		i++;
	}
	printf("단어의 개수 : %d", count + 1);
	return 0;
}