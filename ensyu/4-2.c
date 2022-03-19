#include <stdio.h>

int main(void)
{
    int na, nb, min, max, sum;

    puts("二つの整数を入力せよ。"); 
    printf("整数a："); scanf("%d", &na);
    printf("整数b："); scanf("%d", &nb);

    min = na;
    max = nb;

    if(min > max){
        min = nb;
        max = na;
    }

    sum = 0;

    printf("%d以上%d以下の全整数の和は", min, max);

    do{
        sum += min;
        min += 1;
    } while (min <= max);

    printf("%dです。\n", sum);

    return (0);
}

// 二つの整数を入力せよ。
// 整数a：1
// 整数b：10
// 1以上10以下の全整数の和は55です。