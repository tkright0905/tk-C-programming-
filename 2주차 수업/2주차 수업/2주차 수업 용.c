#include <stdio.h>

int main(void)
{
	char name[11], dept[25];
	int birth_m, birth_d;

	printf("�̸��� �Է��Ͻÿ�: ");
	scanf_s("%s", name,sizeof(name));
	printf("�а��� �Է��Ͻÿ�: ");
	scanf_s("%s", dept,sizeof(dept));
	printf("������ �Է��Ͻÿ�\n��:");
	scanf_s("%d", &birth_m);
	printf("��: ");
	scanf_s("%d", &birth_d);

	printf("�̸�: %s\n�а�: %s\n����: %d�� %d��", name, dept, birth_m, birth_d);

}