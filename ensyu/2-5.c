#include <stdio.h>

int main(void){
    int na,nb;

    puts("二つの整数を入力しください。");
    printf("整数A："); scanf("%d", &na);
    printf("整数B："); scanf("%d", &nb);

    printf("Aの値はBの値の%f％です。\n", (double)100*na/nb);
    return(0);
}

// 二つの整数を入力しください。
// 整数A：54
// 整数B：84
// Aの値はBの値の64.285714％です。

