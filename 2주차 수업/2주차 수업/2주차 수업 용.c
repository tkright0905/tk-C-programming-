#include <stdio.h>

int main(void)
{
	char name[11], dept[25];
	int birth_m, birth_d;

	printf("이름을 입력하시오: ");
	scanf_s("%s", name,sizeof(name));
	printf("학과를 입력하시오: ");
	scanf_s("%s", dept,sizeof(dept));
	printf("생일을 입력하시오\n월:");
	scanf_s("%d", &birth_m);
	printf("일: ");
	scanf_s("%d", &birth_d);

	printf("이름: %s\n학과: %s\n생일: %d월 %d일", name, dept, birth_m, birth_d);

}