#include <stdio.h>
int main(void)
{
	char name[20];
	int price;
	float grade;

	struct product {
		char n[20];
		int p;
		float g;
	};

	struct product p1;
	printf("상품명을 입력하시오 : ");
	fgets(p1.n, 20, stdin);

	printf("가격을 입력하시오 : ");
	scanf_s("%d", &price);
	
	printf("평점을 입력하시오: ");
	scanf_s("%f", &grade);
	p1.p = price;
	p1.g = grade;
	printf("%s: %d원 (평점 : %f)",p1.n, p1.p, p1.g);

}