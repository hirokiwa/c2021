#include <stdio.h>

int sumup(int n){
    int sum = 0;

    for(int i = 1; i < n + 1; i++){
        sum += i;
    }

    return(sum);
}

int main(void)
{
    int n;

    puts("整数を入力せよ。"); 
    printf("整数："); scanf("%d", &n);

    printf("１以上%d以下の全整数の和は%dです。\n", n, sumup(n));

    return (0);
}

// 整数を入力せよ。
// 整数：10
// １以上10以下の全整数の和は55です。