#include <stdio.h>

int main(void)
{
    int na, nb;

    puts("２つの整数を入力せよ。");

    printf("整数A：");
    scanf("%d", &na);
    printf("整数B：");
    scanf("%d", &nb);

    if (nb % na)
        puts("BはAの約数ではありません。");
    else
        puts("BはAの約数です。");

    return (0);
}

// ２つの整数を入力せよ。
// 整数A：2
// 整数B：8
// BはAの約数です。

// ２つの整数を入力せよ。
// 整数A：3
// 整数B：8
// BはAの約数ではありません。
