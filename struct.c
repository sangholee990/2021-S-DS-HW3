#include <stdio.h>

struct student1{
	char lastName;
	int studentId;
	char grade;
}; //구조체 student1 선언

typedef struct{
	char lastName;
	int studentId;
	char grade;
}student2; //구조체 student2 선언

int main(void) {
	struct student1 st1={'A',100,'A'}; //student1 형 st1에 값을 대입

	printf("st1.lastName=%c\n",st1.lastName); // 학생1의 이름 출력
	printf("st1.studentId=%d\n",st1.studentId);// 학생1의 학번 출력
	printf("st1.grade=%c\n",st1.grade);// 학생1의 성적 출력

	student2 st2={'B',200,'B'}; // student2 형 st2에 값을 대입

	printf("\nst2.lastName=%c\n",st2.lastName);// 학생2의 이름 출력
	printf("st2.studentId=%d\n",st2.studentId);// 학생2의 학번 출력
	printf("\nst2.grade=%c\n",st2.grade);// 학생2의 성적 출력

	student2 st3; //student2 형 st3 선언

	st3=st2; //구조치환

	printf("\nst3.lastName=%c\n",st3.lastName); //학생3의 이름 출력
	printf("st3.studentId=%d\n",st3.studentId); //학생3의 학번 출력
	printf("st3.grade=%c\n",st3.grade);//학생3의 성적 출력
	// 출력이 학생2와 같이 출력됨 (구조치환 st3=st2이 사용 가능함! 그 이전버전에서는 직접 넣었어야함)

	/* equality test */ //동등성 검사
	/*
	 if(st3==st2)
	     printf("equal\n");
	 else
	     printf("not equal\n");
	 */ // 주석을 풀면 오류가 난다 일일히 비교 해줘야됨 ex) lastName studentId grade

}
