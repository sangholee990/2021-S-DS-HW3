#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("2018038016 �̻�ȣ\n");
	int list[5]; //��Ұ� 5���� ������ �迭 list ����
	int *plist[5] = {NULL,};// int�� �����͸� ����ִ� �迭���� �� �ʱ�ȭ

	plist[0]= (int *)malloc(sizeof(int)); // plist 0��° ��Ҹ� �����Ҵ�
	list[0]=1; // list[0]�� 1����
	list[1]=100;// list[1]�� 100����

	*plist[0]=200; // plist[0]�� ����Ű�� ���� 200����

	printf("value of list[0]=%d\n",list[0]);// list[0]�� �� ���
	printf("address of list[0]=%p\n",&list[0]);// list[0]�� �ּ� ���
	printf("value of list=%p\n",list);// list�� ��
	printf("address of list (&list) =%p\n",&list);// list�� �ּ� ���
    // &list[0]==list==&list. list��� �̸� ��ü�� list�� ��ġ�ϴ� ���� �ּҰ� �ȴ�.
	printf("-------------------------------------\n\n");
	printf("value of list[1]=%d\n", list[1]); //list[1]�� �� ���
	printf("address of list[1]=%p\n",&list[1]);//list[1]�� �ּ� ���
	printf("value of *(list+1)=%d\n",*(list+1));//list�� �ּҿ� 1�� ���� ���� ����Ű�� ���� ��{==*(list[1])}
	printf("address of list+1=%p\n",list+1);//list+1 ���ּ� (==&list[1])

	printf("-------------------------------------\n\n");
	printf("value of *plist[0]=%d\n",*plist[0]);//plist[0]�� ����Ű�� �� ���
	printf("&plist[0]         =%p\n",&plist[0]);//plist[0]�� �ּ� ���
	printf("&plist            =%p\n",&plist);//plist�� �ּ� ���
	printf("plist             =%p\n",plist);//plist�� �� ���
	printf("plist[0]          =%p\n",plist[0]);//plist[0] ��� (�����ִ� �ּ�)
 	printf("plist[1]          =%p\n",plist[1]);//plist[1] ��� (�����ִ� �ּҰ� ��� 0���)
	printf("plist[2]          =%p\n",plist[2]);//plist[2] ��� (�����ִ� �ּҰ� ��� 0���)
	printf("plist[3]          =%p\n",plist[3]);//plist[3] ��� (�����ִ� �ּҰ� ��� 0���)
	printf("plist[4]          =%p\n",plist[4]);//plist[4] ��� (�����ִ� �ּҰ� ��� 0���)
	//�迭���� �̸��� '�ּ�' (&plist[0]==&plist==plist)

	return 0;
}
