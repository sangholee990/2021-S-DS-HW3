#include <stdio.h>

struct student{
	char lastName[13]; //char형 배열 lastName 선언 13 bytes
	int studentId; //int형 변수 studentId 선언 4bytes
	short grade; //short형 변수 grade 선언 2bytes
};

int main(void) {

	struct student pst; //student 형 pst선언

	printf("size of student = %ld\n",sizeof(struct student)); // 구조체 student의 크기 출력16+4+4= 20bytes 출력
	printf("size of int = %ld\n",sizeof(int));//int 자료형의 크기 출력
	printf("size of short = %ld\n",sizeof(short));//short 자료형의 크기 출력

	// 13+4+2 =19로 출력 되지 않는 이유는 padding을 하기 때문 13(16)+4(4)+2(4)=(24)로 출력된다
}
