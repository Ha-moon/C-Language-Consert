//<7장 : 난수 버블정렬>
//작성자: 509, 신 혜민(B889041)
//날짜 : 2018년 11월 01일
//설명 : 난수를 생성하여 버블정렬로 정렬한다.

#include <stdio.h>
#define SIZE 10000
#include <stdlib.h>

int main(){
	int i,k,j;
	int list[SIZE];
	for (j = 0; j < SIZE; j++)
		list[j] = rand();
	for (k = 0; k < SIZE; k++){
		for (i = 0; i < SIZE - 1; i++){
			if (list[i]>list[i + 1]){
				int tmp = list[i];
				list[i] = list[i + 1];
				list[i + 1] = tmp;
			}
		}
	}
	for (i = 0; i < SIZE; i++){
		printf("%d ", list[i]);
	}
	return 0;
}