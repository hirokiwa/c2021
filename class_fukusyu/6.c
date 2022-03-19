#include <stdio.h>

void hyouji(void){
    printf("2桁の整数を入力せよ");
}

int yomu(void){
    int n;
    scanf("%d", &n);

    return(n);
}

int jouyo(int z){
    return(z % 7);
}

int wa(int x, int y){
    return(x + y);
}

void kekka(int w){
    printf("結果は%dです", w);
}

int main(void){

    int n;

    hyouji();
    n = yomu();

    

    wa()

    kekka();

}