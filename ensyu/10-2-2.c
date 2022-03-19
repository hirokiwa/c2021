/*
（次の日）
*/

#include <stdio.h>

// 閏年判定
int leap(int year){

    int cnt;

    if(year % 400 == 0) cnt = 1;
    else if(year % 100 == 0) cnt = 0;
    else if(year % 4 == 0) cnt = 1;
    else cnt = 0;

    return (cnt);
}

void incriment_date(int *y, int *m, int *d){

    int last[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    if(leap(*y) == 1) last[1] = 29;

    if(*d != last[*m - 1]) *d += 1;
    else{
        *d = 1;

        if(*m != 12) *m += 1;
        else{
            *m = 1;
            *y += 1;
        }
    }
}

int main(void){

    int y, m, d;

    printf("年："); scanf("%d",&y);
    printf("月："); scanf("%d",&m);
    printf("日："); scanf("%d",&d);

    incriment_date(&y, &m, &d);

    printf("次の日は%d年%d月%d日です。\n", y, m, d);

    return(0);
}

