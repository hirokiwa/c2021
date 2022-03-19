#include <stdio.h>

int main(void){
    int n1, n2;

    puts("２つの整数を入力してください。");

    printf("整数1："); scanf("%d", &n1);
    printf("整数2："); scanf("%d", &n2);

    printf("それらの積は%dです。\n", n1*n2);
    
    return(0);
}

// 整数1：12
// 整数2：13
// それらの積は156です。