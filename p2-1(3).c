#include <stdio.h>
#define MAX_SIZE 100 //MAX_SIZE�� 100���� ����;

float sum(float[],int);//�迭 ��Ҹ� �����ִ� �Լ� ����
float input[MAX_SIZE],answer;//�������� �迭 input�� ���� answer����
int i;//�������� i����

int main(void) {
	printf("2018038016 �̻�ȣ\n");
	for(i=0; i<MAX_SIZE;i++)
		input[i]=i;//��ҿ� 0~99���� ����
	/* for checking call by reference */
	printf("address of input = %p\n",input);//input �迭 �ּ� ���
	answer=sum(input, MAX_SIZE);//answer�� sum�Լ� ����� ����
	printf("The sum is: %f\n",answer);//answer �� ���
}

float sum(float list[],int n)
{
	printf("value of list =%p\n",list);//list�� ����� (=input�� �ּ�)
	printf("address of list =%p\n\n",&list);//list�� �ּ� ���
    // list�� input�� ������ �ϰ��ִٴ°��� �˼��ִ�.
	int i; //�������� i���� (�ݺ����뵵)
	float tempsum=0;//float�� ���� tempsum���� �� �ʱ�ȭ (����Ʈ����� �� ����뵵)
	for(i=0;i<n;i++)
		tempsum += list[i];//list����� ������ ��� ���Ѱ��� ����.
	return tempsum; // tempsum�� return.
}

