#include <stdio.h>

int main(void)
{
    int line;

    puts("下向き数字ピラミッドを作ります。"); 
    printf("何段ですか："); scanf("%d", &line);

    for(int i = 1 ; i <= line; i++){
        for(int cnt = 1; cnt <= (i - 1); cnt++){
            putchar(' ');
        }
        for(int j = 1; j <= (2 * (line - i) + 1); j++){
            printf("%d", i % 10);
        }
        for(int cnt = 1; cnt <= (i - 1); cnt++){
            putchar(' ');
        }
        printf("\n");
    }

    return (0);
}

// 下向き数字ピラミッドを作ります。
// 何段ですか：3
// 11111
//  222
//   3