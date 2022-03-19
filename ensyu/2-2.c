#include <stdio.h>

int main(void){
    int na,nb;

    puts("二つの整数を入力しください。");
    printf("整数A："); scanf("%d", &na);
    printf("整数B："); scanf("%d", &nb);

    printf("それらの和は%dで積は%dです。\n", na+nb, na*nb);
    return(0);
}

// 二つの整数を入力しください。
// 整数A：54
// 整数B：12
// それらの和は66で積は648です。