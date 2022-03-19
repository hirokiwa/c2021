#include <stdio.h>

int main(void){

    int point[6][2] = {0};
    double student[6] = {0};
    int sumj = 0;
    int summ = 0;

    for(int i = 0; i < 6; i++){
        printf("%d人目の国語の点数：", i + 1);
        scanf("%d", &point[i][0]);

        printf("%d人目の数学の点数：", i + 1);
        scanf("%d", &point[i][1]);

        sumj += point[i][0];
        summ += point[i][1];

        student[i] = point[i][0] + point[i][1];
    }

    printf("\n      国語  数学\n");
    printf("合計%6d%6d\n", sumj, summ);
    printf("平均%6.1f%6.1f\n\n", (double)sumj/6, (double)summ/6);
    
    puts("      合計  平均");
    for(int i = 0; i < 6; i++){
        printf("%d人目%5d%6.1f\n", i+1, (int)student[i], (double)student[i]/2);
    }

    return(0);
}

// 1人目の国語の点数：87
// 1人目の数学の点数：65
// 2人目の国語の点数：99
// 2人目の数学の点数：65
// 3人目の国語の点数：88
// 3人目の数学の点数：94
// 4人目の国語の点数：86
// 4人目の数学の点数：78
// 5人目の国語の点数：100
// 5人目の数学の点数：65
// 6人目の国語の点数：59
// 6人目の数学の点数：86

//       国語  数学
// 合計   519   453
// 平均  86.5  75.5

//       合計  平均
// 1人目  152  76.0
// 2人目  164  82.0
// 3人目  182  91.0
// 4人目  164  82.0
// 5人目  165  82.5
// 6人目  145  72.5