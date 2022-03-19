// not for submission

#include <stdio.h>

void set_index(int *v, int n){

    for(int i = 0; i < n; i++){
        v[i] = i;
    }
}

int main(void){

    int n;
    
    printf("要素数nを入力せよ："); scanf("%d", &n);

    int a[n];

    set_index(a, n);

    for(int i = 0; i < n; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }

    return(0);
}

// 要素数nを入力せよ：15
// a[0] = 0
// a[1] = 1
// a[2] = 2
// a[3] = 3
// a[4] = 4
// a[5] = 5
// a[6] = 6
// a[7] = 7
// a[8] = 8
// a[9] = 9
// a[10] = 10
// a[11] = 11
// a[12] = 12
// a[13] = 13
// a[14] = 14