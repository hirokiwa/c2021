#include <stdio.h>

int main(void)
{
    int na, nb, nc;

    puts("3つの整数を入力せよ。");

    printf("整数A：");
    scanf("%d", &na);
    printf("整数B：");
    scanf("%d", &nb);
    printf("整数C：");
    scanf("%d", &nc);

    if (na == nb == nc)
        puts("三つの値は等しいです。");
    else if (na == nb || nb == nc || nc == na)
        puts("二つの値は等しいです。");
    else
        puts("三つの値は異なります。");

    return (0);
}

// 3つの整数を入力せよ。
// 整数A：1
// 整数B：1
// 整数C：1
// 三つの値は等しいです。

// 3つの整数を入力せよ。
// 整数A：1
// 整数B：1
// 整数C：2
// 二つの値は等しいです。

// 3つの整数を入力せよ。
// 整数A：1
// 整数B：2
// 整数C：3
// 三つの値は異なります。

