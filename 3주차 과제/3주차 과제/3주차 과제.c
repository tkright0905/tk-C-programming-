#include <stdio.h>
int main(void)
{
	char name[25], dept[25]; // ���ڿ� ���� ���� name = �̸�, dept = �а�
	int birth, stud_num; //���� ���� ���� birth = �������, stud_num = �й�

	printf("�̸��� �Է��Ͻÿ�: ");
	scanf_s("%s", &name,sizeof(name));              //�̸� ���� �Է�
	printf("��������� �Է��Ͻÿ�(����: 20030905): ");
	scanf_s("%d", &birth);             //���� ���� �Է� 
	printf("�й��� �Է��Ͻÿ�: ");
	scanf_s("%d", &stud_num);          //�й� ���� �Է�
	printf("�а����� �Է��Ͻÿ�: ");
	scanf_s("%s", &dept,sizeof(dept));              //�а� ���� �Է�

	printf("\n�̸� : %s\n", name);
	printf("������� : %d\n", birth);
	printf("�й�: %d\n", stud_num);
	printf("�а���: %s", dept);

}