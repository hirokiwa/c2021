#include <stdio.h>

int main(void)
{
    int line;

    puts("ピラミッドを作ります。"); 
    printf("何段ですか："); scanf("%d", &line);

    for(int i = 1 ; i <= line; i++){
        for(int cnt = 1; cnt <= (line - i); cnt++){
            putchar(' ');
        }
        for(int j = 1; j <= (2 * i - 1); j++){
            putchar('*');
        }
        for(int cnt = 1; cnt <= (line - i); cnt++){
            putchar(' ');
        }
        printf("\n");
    }

    return (0);
}

// ピラミッドを作ります。
// 何段ですか：3
//   *
//  ***
// *****