#include <stdio.h>

int main(void){
    int no;

    printf("整数を入力してください：");
    scanf("%d", &no);

    printf("%dから7を減じると%dです。\n",no,no-7);

    return(0);
}

// 整数を入力してください：10
// 10から7を減じると3です。
