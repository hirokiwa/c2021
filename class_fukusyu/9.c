#include <stdio.h>

int main(void){
    char a[] = "NET";
    char b[4];

    int i = 0;

    while(i < 4){
        b[i] = a[3 - i];
        i++;
    }

    // for(int i = 0; i < 4; i++){
    //     b[i] = a[3 - i];
    //     i++;
    // }

    b[3] = '\n';

    printf("逆から読むと%sです",b);

    return(0);
}