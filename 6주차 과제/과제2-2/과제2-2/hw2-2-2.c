#include <stdio.h>
int commonmulti2(void)
{
	int num1, num2;
	printf("���� 1�� �Է��ϼ���: ");                       // ���� 2�� ���� �ޱ�
	scanf_s("%d", &num1);
	printf("���� 2�� �Է��ϼ���: ");
	scanf_s("%d", &num2);

	for (int i = 1; i <= num1 * num2; i++)
	{
		if (i % num1 == 0 && i % num2 == 0)          //�ݺ����� ���� �ּҰ���� ã��
		{
			printf("�ּҰ����: %d\n", i);
			return 0;                                  // �ּ� ����� ã���� �Լ� ����
		}
	}
}
int commondiv2(void)
{
	int num1, num2;
	printf("���� 1�� �Է��ϼ���: ");                       // ���� 2�� ���� �ޱ�
	scanf_s("%d", &num1);
	printf("���� 2�� �Է��ϼ���: ");
	scanf_s("%d", &num2);

	int min;
	if (num1 < num2) min = num1;                //���ǿ� ��Ա� ���ؼ� �� ���� �� �˾Ƴ���, 
	if (num1 >= num2) min = num2;

	for (int i = min; i >= 2; i--)            //�ݺ������� �ִ����� ã��
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			printf("�ִ�����: %d\n", i);
			return 0;                     //�ִ� ����� ã���� �Լ� ����
		}
	}
}
int prime2(void)
{
	int num1;
	printf("�Ҽ��� �Ǻ��� ���ڸ� �Է��ϼ���: ");
	scanf_s("%d", &num1);
	for (int i = 2; i < num1; i++)           //�ݺ����� �̿��� �Ҽ� ã��
	{
		if (num1 % i == 0)
		{
			printf("%d�� �Ҽ��� �ƴմϴ�.", num1);    // �Ҽ��� �ƴ��� Ȯ���ϸ� �ƴ϶�� ���� ����ϰ� �Լ� ����
			return 0;
		}
	}
	printf("%d�� �Ҽ��Դϴ�.", num1);
	return 0;									// �Ҽ��� �Ҽ���� ���� ����ϰ� �Լ� ����
}