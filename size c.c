#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int **x;// int�� ���� ������ x ����

	printf("sizeof(x)=%lu\n",sizeof(x));//4 ��� 32��Ʈ �ü������ �ּ�����ũ�� 4bytes
	printf("sizeof(*x)=%lu\n",sizeof(*x));//4 ��� 32��Ʈ �ü������ �ּ�����ũ�� 4bytes
	printf("sizeof(**x)=%lu\n",sizeof(**x));//4 ��� int���� �����ϴ� ���̱� ������ 4bytes
}
