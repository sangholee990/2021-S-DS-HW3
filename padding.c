#include <stdio.h>

struct student{
	char lastName[13]; //char�� �迭 lastName ���� 13 bytes
	int studentId; //int�� ���� studentId ���� 4bytes
	short grade; //short�� ���� grade ���� 2bytes
};

int main(void) {

	struct student pst; //student �� pst����

	printf("size of student = %ld\n",sizeof(struct student)); // ����ü student�� ũ�� ���16+4+4= 20bytes ���
	printf("size of int = %ld\n",sizeof(int));//int �ڷ����� ũ�� ���
	printf("size of short = %ld\n",sizeof(short));//short �ڷ����� ũ�� ���

	// 13+4+2 =19�� ��� ���� �ʴ� ������ padding�� �ϱ� ���� 13(16)+4(4)+2(4)=(24)�� ��µȴ�
}
