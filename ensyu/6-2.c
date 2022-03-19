#include <stdio.h>

int min3(int a, int b, int c){
    
    return a < b ? (a < c ? a : c) : (b < c ? b : c);
}

int main(void){
    int n1, n2,n3;

    puts("３つの整数を入力してください。");

    printf("整数1："); scanf("%d", &n1);
    printf("整数2："); scanf("%d", &n2);
    printf("整数3："); scanf("%d", &n3);

    printf("最小値は%dです。\n", min3(n1, n2, n3));
    
    return(0);
}

// ３つの整数を入力してください。
// 整数1：3
// 整数2：1
// 整数3：2
// 最小値は1です。

