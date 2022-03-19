#include <stdio.h>

int main(void){

    int x;

    do{
        printf("正整数x (x<32768)を入力せよ:"); scanf("%d", &x);    
    }while(x < 1 || x > 32767);

    // 偶奇--------------------------------------
    if(x % 2 == 0) puts("偶数です。");
    else puts("奇数です。");

    // 素数--------------------------------------
    int prime = 0;

    for(int i = 2; i < x; i++){
        if(x % i == 0){
            prime = 1;
            break;
        }
    }

    if(prime == 1 || x == 1) puts("素数ではありません。");
    else puts("素数です。");
    
    // ２のべき乗--------------------------------
    int power = 0;
    int cnt = 1;

    for(int i = 2; i < x + 1; i *= 2){
        if(x == i){
            power = 1;
            break;
        }
        cnt++;
    }

    if(power == 1) printf("x=2^(%d)\n",cnt);
    else puts("２のべき乗ではありません。");

    return(0);
}