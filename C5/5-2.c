#include <stdio.h>

int main(void)
{
    int number;
    int number2;

    printf("정수를 입력하세요:");
    scanf("%d", &number);
    number2=number;



    if(number % 2==1)
    {
    printf("%d은(는) 홀수입니다.", number2);
    }
    else
    {
    printf("%d은(는)짝수입니다.", number2);
    }




}