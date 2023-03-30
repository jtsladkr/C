#include <stdio.h>
int main(void)
{   
    int number, number2, result;
    char op;

    
  
    printf("수식을 입력하세요. (ex.2+5)");
    scanf("%d %c %d",&number, &op, &number2);

    switch (op)
    {
    case '+':
        result = number + number2;
        break;
    case '-':
        result = number - number2;
        break;
    case '*':
        result = number * number2;
        break;
    case '/':
        result = number / number2;
        break;
    case '%':
        result = number % number2;
        break;
    default:
    printf("해당 기호는 사용 할 수 없는 기호입니다.");
        break;
    }

    printf("%d", result);

    
}
