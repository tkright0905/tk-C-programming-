#include <stdio.h>

int commonmulti(int num1, int num2)
{              

	for (int i = 1; i <= num1 * num2; i++)       
	{
		if (i % num1 == 0 && i % num2 == 0)          //반복문을 통한 최소공배수 찾기
		{
			printf("최소공배수: %d\n", i);  
			return 0;                                  // 최소 공배수 찾으면 함수 종료
		}
	}
}
int commondiv(int num1, int num2)
{
	int result, min;
	if (num1 < num2) min = num1;                //조건에 써먹기 위해서 더 작은 값 알아내기, 
	if (num1 >= num2) min = num2;

	for (int i = min; i >=2; i--)            //반복문으로 최대공약수 찾기
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			printf("최대공약수: %d\n", i);
			return 0;                     //최대 공약수 찾으면 함수 종료
		}
	}
}int prime(int num1)
{

	for (int i = 2; i < num1; i++)           //반복문을 이용한 소수 찾기
	{
		if (num1 % i == 0)
		{
			printf("%d는 소수가 아닙니다.", num1);    // 소수가 아님을 확인하면 0을 출력
			return 0;                                
		}
	}
	printf("%d는 소수입니다.", num1);
	return 0;									// 소수면 1을 출력
}


