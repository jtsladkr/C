#include <stdio.h>

int main(void)
{
    int total, money;
    int m1000, m500, m100;

    
    printf("물건 값을 입력하세요:");
    scanf("%d", &total);

    printf("투입한 금액을 입력하시오:");
    scanf("%d", &money);
    
    printf("거스름돈은 다음과 같습니다.");

    m1000=money/1000;
    money=money % 1000;
    m500=money/500;
    money=money % 500;
    m100=money/100;
    money=money % 100;

    printf("\n천원권: %d장\n", m1000);
    printf("오백원 동전: %d개\n", m500);
    printf("백원 동전: %d개\n", m100);
    return 0;
}
    
