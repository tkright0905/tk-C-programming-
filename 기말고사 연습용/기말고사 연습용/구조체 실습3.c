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
	printf("��ǰ���� �Է��Ͻÿ� : ");
	fgets(p1.n, 20, stdin);

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &price);
	
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%f", &grade);
	p1.p = price;
	p1.g = grade;
	printf("%s: %d�� (���� : %f)",p1.n, p1.p, p1.g);

}