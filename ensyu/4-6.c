#include <stdio.h>

int main(void)
{
    int no;
    int i = 0;

    printf("正の整数を入力せよ："); scanf("%d", &no);

    do{
        printf("%d ", i);
        i += 2;
    } while(i <= no);

    printf("\n");

    return (0);
}

// 正の整数を入力せよ：13
// 0 2 4 6 8 10 12