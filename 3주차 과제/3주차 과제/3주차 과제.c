#include <stdio.h>
int main(void)
{
	char name[25], dept[25]; // 문자열 변수 설정 name = 이름, dept = 학과
	int birth, stud_num; //숫자 변수 설정 birth = 생년월일, stud_num = 학번

	printf("이름을 입력하시오: ");
	scanf_s("%s", &name,sizeof(name));              //이름 변수 입력
	printf("생년월일을 입력하시오(예시: 20030905): ");
	scanf_s("%d", &birth);             //생일 변수 입력 
	printf("학번을 입력하시오: ");
	scanf_s("%d", &stud_num);          //학번 변수 입력
	printf("학과명을 입력하시오: ");
	scanf_s("%s", &dept,sizeof(dept));              //학과 변수 입력

	printf("\n이름 : %s\n", name);
	printf("생년월일 : %d\n", birth);
	printf("학번: %d\n", stud_num);
	printf("학과명: %s", dept);

}