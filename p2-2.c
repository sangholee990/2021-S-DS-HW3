#include <stdio.h>

void print1(int *ptr,int rows);//출력 함수 print1 선언

int main(void) {
	int one[]={0,1,2,3,4};//int 형 배열 one 선언

	printf("one     =%p\n",one);//one의 값 출력
	printf("&one    =%p\n",&one);//one의 주소 출력
	printf("&one[0]     =%p\n",&one[0]);//one[0]의 주소출력
	printf("\n");

	print1(&one[0],5);//one배열의 주소와 들어있는 값 출력

	return 0;
}

void print1(int *ptr,int rows)
{/*print out a one-dimensional array using a pointer */

	int i;//지역변수 i선언 반복문 사용 용도
	printf("Address \t Contents\n");
	for(i=0;i<rows;i++)
		printf("%p \t %5d\n",ptr+i,*(ptr+i));// one배열의 주소, 요소의 값 출력
	printf("\n");

}
