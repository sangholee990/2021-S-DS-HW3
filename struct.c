#include <stdio.h>

struct student1{
	char lastName;
	int studentId;
	char grade;
}; //����ü student1 ����

typedef struct{
	char lastName;
	int studentId;
	char grade;
}student2; //����ü student2 ����

int main(void) {
	struct student1 st1={'A',100,'A'}; //student1 �� st1�� ���� ����

	printf("st1.lastName=%c\n",st1.lastName); // �л�1�� �̸� ���
	printf("st1.studentId=%d\n",st1.studentId);// �л�1�� �й� ���
	printf("st1.grade=%c\n",st1.grade);// �л�1�� ���� ���

	student2 st2={'B',200,'B'}; // student2 �� st2�� ���� ����

	printf("\nst2.lastName=%c\n",st2.lastName);// �л�2�� �̸� ���
	printf("st2.studentId=%d\n",st2.studentId);// �л�2�� �й� ���
	printf("\nst2.grade=%c\n",st2.grade);// �л�2�� ���� ���

	student2 st3; //student2 �� st3 ����

	st3=st2; //����ġȯ

	printf("\nst3.lastName=%c\n",st3.lastName); //�л�3�� �̸� ���
	printf("st3.studentId=%d\n",st3.studentId); //�л�3�� �й� ���
	printf("st3.grade=%c\n",st3.grade);//�л�3�� ���� ���
	// ����� �л�2�� ���� ��µ� (����ġȯ st3=st2�� ��� ������! �� �������������� ���� �־������)

	/* equality test */ //��� �˻�
	/*
	 if(st3==st2)
	     printf("equal\n");
	 else
	     printf("not equal\n");
	 */ // �ּ��� Ǯ�� ������ ���� ������ �� ����ߵ� ex) lastName studentId grade

}
