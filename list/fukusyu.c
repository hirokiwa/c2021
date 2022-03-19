#include <stdio.h>

void saidai(int *x, int *y, int *z){
    if(*x < *y) *x = *y;
    if(*x < *z) *x = *z;
}

int main(void){

    int x, y, z;

    puts("3つの整数を入力せよ");
    printf("x="); scanf("%d", &x);
    printf("y="); scanf("%d", &y);
    printf("z="); scanf("%d", &z);

    saidai(&x, &y, &z);

    printf("最大値は%dです", x);

    return(0);
}