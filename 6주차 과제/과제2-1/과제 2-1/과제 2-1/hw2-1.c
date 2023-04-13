#include <stdio.h>
void decimal(int num)
{

	if (num == 0)//num값이 0이면 0을 출력 
	{
		return 0;
	}
	else
	{
		decimal(num / 2);//num값이 0이 아니면 그 값을 2로 나눈것을 다시 함수에 넣어서 재귀함수 형태를 만듬 .
		printf("%c", num % 2 + '0');// num %2가 0이 아니면 그 값에 문자'0'을 더해준다. 그 이유는 ASCII에서 0을 나타내는 코드값이 48이고 그 값에 num%2 을 더해주면 우리가 원하는 문자를 출력할 수 있기 때문이다.
	}
	return;
}
//위의 함수는 2진수로 바꾸는 함수지만 위에 2 값을 3~9값으로 바꾸면 3~9진수로 바꾸는 함수가 된다. 따라서 3~9진수 함수는 따로 만들지 않겠습니다.
void decimal_over10(int num)
{
	if (num == 0)//num이 0이면 0을 출력
	{
		return 0;
	}
	else
	{
		decimal_over10(num / 16);//num값이 0이 아니면 num을 16으로 나눈 값을 다시 함수에 넣어서 재귀함수 형태를 만듬
		if (num % 16 > 9)
			printf("%c", num % 16 + '7');//num을 16으로 나눈 값이 10이상이면 16진수에서는 알파벳 문자로 출력하므로 ASCII코드를 이용해서 '7'을 더해줌
		else
		{
			printf("%c", num % 16 + '0');//num을 16으로 나눈 값이 10보다 작으면 16진수에서는 숫자로 출력되므로 위와 동일한 이유로 '0'을 더해줌.
		}
	}
	return;
}
// 위의 함수는 16진수로 바꾸는 함수지만 위에 16을 11~15로 바꾸면 11~15진수로 바꾸는 함수가 된다. 따라서 11~15진수 함수는 따로 만들지 않겠습니다.
int main(void)
{
	int num;
	printf("10진수를 입력하세요: ");//num값 입력 
	scanf_s("%d", &num);
	decimal(num);    //2진수로 바꿈&출력
	printf("\n");
	decimal_over10(num); //16진수로 바꿈&출력
	return 0;
}