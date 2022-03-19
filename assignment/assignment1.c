#include <stdio.h>
#include <math.h>

int main(void){

    int a, b, c, D;

    puts("二次方程式 ax^2+bx+c=0 の係数を整数で入力してください");
    printf("a="); scanf("%d", &a);
    while(a == 0){
        puts("\aa≠0で入力してください");
        printf("a="); scanf("%d", &a);
    }
    printf("b="); scanf("%d", &b);
    printf("c="); scanf("%d", &c);

    D = b * b - 4 * a * c;

    if(D > 0){
        puts("実数２解です。");
        printf("x=%.2f,%.2f\n",(- b + sqrt(D)) / (2 * a), (- b - sqrt(D)) / (2 * a));
    }
    else if(D == 0){
        puts("重解です。");
        printf("x=%.2f\n",(double)(- b) / (2 * a));
    }
    else{
        puts("虚数解です。");
        printf("x=%.2f+%.2fi,%.2f-%.2fi\n",(double)(- b) / (2 * a), sqrt(-D) / (2 * a), (double)(- b) / (2 * a), sqrt(-D) / (2 * a));
    }

    return(0);

}