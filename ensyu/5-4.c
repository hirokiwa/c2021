#include <stdio.h>

#define NUMBER 7

int main(void)
{
    int x[NUMBER];

    for ( int i = 0; i < NUMBER; i++){
        printf("x[%d]：", i);
        scanf("%d", &x[i]);
    }

    for ( int i = 0; i < NUMBER/2 ; i++){
        int t = x[i];
        x[i] = x[NUMBER - i - 1];
        x[NUMBER - i - 1] = t;
    }
    
    puts("反転しました。");
    for ( int i = 0; i < NUMBER; i++){
        printf("x[%d] = %d\n", i, x[i]);
    }
    
    return (0);
}

// x[0]：1
// x[1]：6
// x[2]：2
// x[3]：7
// x[4]：3
// x[5]：9
// x[6]：8
// 反転しました。
// x[0] = 8
// x[1] = 9
// x[2] = 3
// x[3] = 7
// x[4] = 2
// x[5] = 6
// x[6] = 1