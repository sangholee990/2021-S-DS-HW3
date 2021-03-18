#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("2018038016 이상호\n");

	int list[5]; //요소가 5개인 정수형 배열 list선언
	int *plist[5];//int형 포인터를 담는 배열 선언

	list[0]=10;//list[0]에 10대입
	list[1]=11;//list[1]에 11대입

	plist[0] = (int*)malloc(sizeof(int)); //plist 0번째 요소를 동적할당

	printf("list[0] =%d\n", list[0]);//list[0] 값 출력
	printf("address of list \t= %p\n", list); //list의 주소출력(==&list)
	printf("address of list[0] \t= %p\n", &list[0]);//list[0]의 주소출력
	printf("address of list + 0 \t= %p\n", list+0);//list+0 의 주소출력
	printf("address of list + 1 \t= %p\n", list+1);//list+1
	printf("address of list + 2 \t= %p\n", list+2);//list+2
	printf("address of list + 3 \t= %p\n", list+3);//list+3
	printf("address of list + 4 \t= %p\n", list+4);//list+4 주소가 4bytes 씩 차이남 (int가 4bytes라서)
	printf("address of list[4] \t= %p\n", &list[4]);//list[4]의 주소 출력
    // (list+4==&list[4]) 라는것을 알수있음

	free(plist[0]); //할당 받은 메모리를 반환

	return 0;
}
