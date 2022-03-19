#include <stdio.h>

int main(void){
    int n1, n2,n3;

    puts("３つの整数を入力してください。");

    printf("整数1："); scanf("%d", &n1);
    printf("整数2："); scanf("%d", &n2);
    printf("整数3："); scanf("%d", &n3);

    printf("それらの和は%dです。\n", n1+n2+n3);
    
    return(0);
}

// ３つの整数を入力してください。
// 整数1：2
// 整数2：3
// 整数3：4
// それらの和は9です。