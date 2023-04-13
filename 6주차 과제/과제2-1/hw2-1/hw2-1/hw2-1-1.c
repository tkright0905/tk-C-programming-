#include <stdio.h>
void decimal(int num)
{

	if (num == 0)//num의 값이 0이면 2진수 값 0 출력
	{
		return 0;
	}
	else
	{
		decimal(num / 2);//num값이 0이 아니면 그 값을 2로 나눠서 그 몫을 다시 재귀함수에 넣는다.
		printf("%c", num % 2+ '0');// num %2가 0이면 문자 0을 출력하고, num%2가 1이면 문자 1을 출력한다. 그 이유는 ASCII코드에 있다.
	}
	return;
}
// 위에 decimal 함수는 10진수를 2진수로 바꾸는 함수이다. 위에 2를 3~9값으로 변화 시키면 3~9진수를 출력하는 함수가 된다. 따라서 따로 3~9진수 함수는 만들지 않겠습니다.
void decimal_over10(int num)
{	 
	if (num == 0)//num값이 0이면 0을 출력
	{
		return 0;
	}
	else                                   
	{
		decimal_over10(num / 16);//num값이 0이 아니면 그 값을 16으로 나눠 그 몫을 다시 재귀함수에 넣는다.
		if (num % 16 > 9)
			printf("%c", num % 16+ '7');//num의 나머지 값이 10이상이면 16진수에서는 알파벳 문자로 출력되므로 ASCIl를 이용해서 문자 출력
		else
		{
			printf("%c", num % 16 + '0');//num의 나머지 값이 10 이하이면 16진수에서 숫자로 출력되므로 위와 동일하게 '0'을 더해준다.
		}
	}
	return;
}
//위의 decimal_over10 함수는 10진수를 16진수로 바꾸는 함수이다. 위에 16값을 11~15로 변화 시키면 11~15진수를 출력하는 함수가 된다. 따라서 따로 11~15진수 함수는 만들지 않겠습니다
int main(void)
{
	int num;
	printf("10진수를 입력하세요: ");//num 값 입력
	scanf_s("%d", &num);
	decimal(num);    //2진수 바꿈&출력
	printf("\n");  
	decimal_over10(num); //16진수 바꿈&출력
	return 0;
}