#include <stdio.h>
#define MAX_SIZE 100 //MAX_SIZE를 100으로 정의;

float sum(float[],int);//배열 요소를 더해주는 함수 선언
float input[MAX_SIZE],answer;//전역으로 배열 input과 변수 answer선언
int i;//전역변수 i선언

int main(void) {
	printf("2018038016 이상호\n");
	for(i=0; i<MAX_SIZE;i++)
		input[i]=i;//요소에 0~99까지 대입
	/* for checking call by reference */
	printf("address of input = %p\n",input);//input 배열 주소 출력
	answer=sum(input, MAX_SIZE);//answer에 sum함수 결과값 대입
	printf("The sum is: %f\n",answer);//answer 값 출력
}

float sum(float list[],int n)
{
	printf("value of list =%p\n",list);//list의 값출력 (=input의 주소)
	printf("address of list =%p\n\n",&list);//list의 주소 출력
    // list가 input을 포인팅 하고있다는것을 알수있다.
	int i; //지역변수 i선언 (반복문용도)
	float tempsum=0;//float형 변수 tempsum선언 후 초기화 (리스트요소의 값 저장용도)
	for(i=0;i<n;i++)
		tempsum += list[i];//list요소의 값들을 모두 더한값을 저장.
	return tempsum; // tempsum을 return.
}

