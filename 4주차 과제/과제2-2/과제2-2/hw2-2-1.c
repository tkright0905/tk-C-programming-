#include <stdio.h>

int commonmulti(int num1, int num2)
{              

	for (int i = 1; i <= num1 * num2; i++)       
	{
		if (i % num1 == 0 && i % num2 == 0)          //�ݺ����� ���� �ּҰ���� ã��
		{
			printf("�ּҰ����: %d\n", i);  
			return 0;                                  // �ּ� ����� ã���� �Լ� ����
		}
	}
}
int commondiv(int num1, int num2)
{
	int result, min;
	if (num1 < num2) min = num1;                //���ǿ� ��Ա� ���ؼ� �� ���� �� �˾Ƴ���, 
	if (num1 >= num2) min = num2;

	for (int i = min; i >=2; i--)            //�ݺ������� �ִ����� ã��
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			printf("�ִ�����: %d\n", i);
			return 0;                     //�ִ� ����� ã���� �Լ� ����
		}
	}
}int prime(int num1)
{

	for (int i = 2; i < num1; i++)           //�ݺ����� �̿��� �Ҽ� ã��
	{
		if (num1 % i == 0)
		{
			printf("%d�� �Ҽ��� �ƴմϴ�.", num1);    // �Ҽ��� �ƴ��� Ȯ���ϸ� 0�� ���
			return 0;                                
		}
	}
	printf("%d�� �Ҽ��Դϴ�.", num1);
	return 0;									// �Ҽ��� 1�� ���
}


