#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("2018038016 �̻�ȣ\n");

	int list[5]; //��Ұ� 5���� ������ �迭 list����
	int *plist[5];//int�� �����͸� ��� �迭 ����

	list[0]=10;//list[0]�� 10����
	list[1]=11;//list[1]�� 11����

	plist[0] = (int*)malloc(sizeof(int)); //plist 0��° ��Ҹ� �����Ҵ�

	printf("list[0] =%d\n", list[0]);//list[0] �� ���
	printf("address of list \t= %p\n", list); //list�� �ּ����(==&list)
	printf("address of list[0] \t= %p\n", &list[0]);//list[0]�� �ּ����
	printf("address of list + 0 \t= %p\n", list+0);//list+0 �� �ּ����
	printf("address of list + 1 \t= %p\n", list+1);//list+1
	printf("address of list + 2 \t= %p\n", list+2);//list+2
	printf("address of list + 3 \t= %p\n", list+3);//list+3
	printf("address of list + 4 \t= %p\n", list+4);//list+4 �ּҰ� 4bytes �� ���̳� (int�� 4bytes��)
	printf("address of list[4] \t= %p\n", &list[4]);//list[4]�� �ּ� ���
    // (list+4==&list[4]) ��°��� �˼�����

	free(plist[0]); //�Ҵ� ���� �޸𸮸� ��ȯ

	return 0;
}
