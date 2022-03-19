#include <stdio.h>

void judge_odd(int x){

    if(x % 2 == 0) puts("偶数です。");
    else puts("奇数です。");

    return;
}

void judge_prime(int x){
    int prime = 0;

    for(int i = x - 1; i > 1; i--){
        if(x % i == 0){
            prime = 1;
            break;
        }
    }

    if(prime == 1 || x == 1) puts("素数ではありません。");
    else puts("素数です。");

    return;
}

void judge_power(int x){
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

    return;
}


int main(void){

    int x;

    printf("正整数xを入力してください:"); scanf("%d", &x);

    judge_odd(x);

    judge_prime(x);
    
    judge_power(x);

    return(0);
}