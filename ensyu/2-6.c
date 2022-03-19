#include <stdio.h>

int main(void){
    int height;
    double weight;

    printf("身長を入力しください：");
    scanf("%d", &height);

    weight = (height -100) * 0.9;

    printf("標準体重は%4.1fです。\n", weight);
    return(0);
}

// 身長を入力しください：175
// 標準体重は67.5です。