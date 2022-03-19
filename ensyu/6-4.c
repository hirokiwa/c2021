#include <stdio.h>

int pow4(int x){
    return x*x*x*x;
}

int main(void){
    int x;

    puts("整数を入力してください。");

    printf("整数："); scanf("%d", &x);

    printf("４乗値は%dです。\n", pow4(x));
    
    return(0);
}

// 整数を入力してください。
// 整数：2
// ４乗値は16です。