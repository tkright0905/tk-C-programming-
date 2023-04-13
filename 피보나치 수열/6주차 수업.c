#include <stdio.h>

int fibonacci(int num)
{
	int a1 = 0, a2 = 1;
	int result;
	if (num == 1) result = 0;
	if (num == 2) result = 1;
	if (num > 2) result = 1;
	{
		for (int i = 2; i < num; i++)
		{
			result = fibonacci(num - 1) + fibonacci(num - 2);

			return result;
		}
	}
}

int main(void)
{
	int num;
	printf("몇번째 피보나치 수열까지 출력할까요?: ");
	scanf_s("%d", &num);
	
	for (int i = 0; i <= num; i++)
	{
		int result = fibonacci(i);
		printf("%d번째 피보나치 수열: %d\n", i, result);
	}
	return 0;
}
