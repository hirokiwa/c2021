#include <stdio.h>

int main(void){
    int h = 5;
    char a = '@', b = '#', c = ' ';

    for(int i = 0; i < 6; i++){
        for(int j = 0; j < i; j++)
        printf("%c",c);
        for(int j = 0; j < (2 * h - 2 * i + 1); j++){
            printf("%c", ((i + 1) % 2)? a : b);
        }
        printf("\n");
    }

    return(0);
}