#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("2018038016 이상호\n");
	int list[5]; //요소가 5개인 정수형 배열 list 선언
	int *plist[5] = {NULL,};// int형 포인터를 담고있는 배열선언 후 초기화

	plist[0]= (int *)malloc(sizeof(int)); // plist 0번째 요소를 동적할당
	list[0]=1; // list[0]에 1대입
	list[1]=100;// list[1]에 100대입

	*plist[0]=200; // plist[0]이 가리키는 값에 200대입

	printf("value of list[0]=%d\n",list[0]);// list[0]의 값 출력
	printf("address of list[0]=%p\n",&list[0]);// list[0]의 주소 출력
	printf("value of list=%p\n",list);// list의 값
	printf("address of list (&list) =%p\n",&list);// list의 주소 출력
    // &list[0]==list==&list. list라는 이름 자체가 list가 위치하는 곳의 주소가 된다.
	printf("-------------------------------------\n\n");
	printf("value of list[1]=%d\n", list[1]); //list[1]의 값 출력
	printf("address of list[1]=%p\n",&list[1]);//list[1]의 주소 출력
	printf("value of *(list+1)=%d\n",*(list+1));//list의 주소에 1을 더한 값이 가리키는 곳의 값{==*(list[1])}
	printf("address of list+1=%p\n",list+1);//list+1 의주소 (==&list[1])

	printf("-------------------------------------\n\n");
	printf("value of *plist[0]=%d\n",*plist[0]);//plist[0]가 가리키는 값 출력
	printf("&plist[0]         =%p\n",&plist[0]);//plist[0]의 주소 출력
	printf("&plist            =%p\n",&plist);//plist의 주소 출력
	printf("plist             =%p\n",plist);//plist의 값 출력
	printf("plist[0]          =%p\n",plist[0]);//plist[0] 출력 (갖고있는 주소)
 	printf("plist[1]          =%p\n",plist[1]);//plist[1] 출력 (갖고있는 주소가 없어서 0출력)
	printf("plist[2]          =%p\n",plist[2]);//plist[2] 출력 (갖고있는 주소가 없어서 0출력)
	printf("plist[3]          =%p\n",plist[3]);//plist[3] 출력 (갖고있는 주소가 없어서 0출력)
	printf("plist[4]          =%p\n",plist[4]);//plist[4] 출력 (갖고있는 주소가 없어서 0출력)
	//배열에서 이름은 '주소' (&plist[0]==&plist==plist)

	return 0;
}
