#include <stdio.h>

void print1(int *ptr,int rows);//��� �Լ� print1 ����

int main(void) {
	int one[]={0,1,2,3,4};//int �� �迭 one ����

	printf("one     =%p\n",one);//one�� �� ���
	printf("&one    =%p\n",&one);//one�� �ּ� ���
	printf("&one[0]     =%p\n",&one[0]);//one[0]�� �ּ����
	printf("\n");

	print1(&one[0],5);//one�迭�� �ּҿ� ����ִ� �� ���

	return 0;
}

void print1(int *ptr,int rows)
{/*print out a one-dimensional array using a pointer */

	int i;//�������� i���� �ݺ��� ��� �뵵
	printf("Address \t Contents\n");
	for(i=0;i<rows;i++)
		printf("%p \t %5d\n",ptr+i,*(ptr+i));// one�迭�� �ּ�, ����� �� ���
	printf("\n");

}
