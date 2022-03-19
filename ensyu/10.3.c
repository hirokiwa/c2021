#include <stdio.h>

void swap(int *x, int *y){

    int temp = *x;

    *x = *y;
    *y = temp;
}

void sort3(int *n1, int *n2, int *n3){
    
    if(*n1 > *n2) swap(n1, n2);
    if(*n2 > *n3) swap(n2, n3);
    if(*n1 > *n2) swap(n1, n2);
    
}

int main(void){

    int n1, n2, n3;

    puts("３つの整数を入力せよ。");

    printf("整数1："); scanf("%d", &n1);
    printf("整数2："); scanf("%d", &n2);
    printf("整数3："); scanf("%d", &n3);

    sort3(&n1, &n2, &n3);

    puts("昇順にソートしました。");
    printf("整数1は%dです。\n", n1);
    printf("整数2は%dです。\n", n2);
    printf("整数3は%dです。\n", n3);

    return(0);
}

// ３つの整数を入力せよ。
// 整数1：21
// 整数2：57
// 整数3：93
// 昇順にソートしました。
// 整数1は21です。
// 整数2は57です。
// 整数3は93です。

// ３つの整数を入力せよ。
// 整数1：21
// 整数2：93
// 整数3：57
// 昇順にソートしました。
// 整数1は21です。
// 整数2は57です。
// 整数3は93です。

// ３つの整数を入力せよ。
// 整数1：57
// 整数2：21
// 整数3：93
// 昇順にソートしました。
// 整数1は21です。
// 整数2は57です。
// 整数3は93です。

// ３つの整数を入力せよ。
// 整数1：57
// 整数2：93
// 整数3：21
// 昇順にソートしました。
// 整数1は21です。
// 整数2は57です。
// 整数3は93です。

// ３つの整数を入力せよ。
// 整数1：93
// 整数2：21
// 整数3：57
// 昇順にソートしました。
// 整数1は21です。
// 整数2は57です。
// 整数3は93です。

// ３つの整数を入力せよ。
// 整数1：93
// 整数2：57
// 整数3：21
// 昇順にソートしました。
// 整数1は21です。
// 整数2は57です。
// 整数3は93です。