#include <stdio.h>

int main(void)
{
    int n1, n2;

    puts("二つの整数を入力せよ。");

    printf("整数１：");
    scanf("%d", &n1);
    printf("整数２：");
    scanf("%d", &n2);

    if ( n1 < n2 )
        printf("それらの差は%dです。\n", n2 - n1);
    else
        printf("それらの差は%dです。\n", n1 - n2);

    return (0);
}

// 二つの整数を入力せよ。
// 整数１：5
// 整数２：3
// それらの差は2です。
