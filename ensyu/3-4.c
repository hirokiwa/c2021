#include <stdio.h>

int main(void)
{
    int na, nb;

    puts("２つの整数を入力せよ。");

    printf("整数A：");
    scanf("%d", &na);
    printf("整数B：");
    scanf("%d", &nb);

    if (na > nb)
        puts("AはBより大きいです。");
    else if (na < nb)
        puts("AはBより小さいです。");
    else
        puts("AとBは等しいです。");

    return (0);
}

// ２つの整数を入力せよ。
// 整数A：54
// 整数B：12
// AはBより大きいです。

// ２つの整数を入力せよ。
// 整数A：12  
// 整数B：54
// AはBより小さいです。

// ２つの整数を入力せよ。
// 整数A：12
// 整数B：12
// AとBは等しいです。