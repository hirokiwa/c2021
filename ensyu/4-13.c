#include <stdio.h>

int main(void)
{
    int no;
    int cnt = 1;
    int sum = 0;

    puts("二つの整数を入力せよ。"); 
    printf("整数："); scanf("%d", &no);

    printf("1から%dまでの総和は", no);

    do{
        sum += cnt;
        cnt += 1;
    } while (cnt <= no);

    printf("1から%dまでの総和は%dです。\n", no, sum);

    return (0);
}

// 二つの整数を入力せよ。
// 整数：10
// 1から10までの総和は1から10までの総和は55です。