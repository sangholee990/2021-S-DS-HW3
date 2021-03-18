#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int **x;// int형 더블 포인터 x 선언

	printf("sizeof(x)=%lu\n",sizeof(x));//4 출력 32비트 운영체제에서 주소저장크기 4bytes
	printf("sizeof(*x)=%lu\n",sizeof(*x));//4 출력 32비트 운영체제에서 주소저장크기 4bytes
	printf("sizeof(**x)=%lu\n",sizeof(**x));//4 출력 int값을 저장하는 곳이기 때문에 4bytes
}
