/*
（前の日）
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

void decrement_date(int *y, int *m, int *d){

    int last[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    if(leap(*y) == 1) last[1] = 29;

    if(*d != 1) *d -= 1;
    else{
        if(*m = 1) *d = 31;
        else *d = last[*m -2];

        if(*m != 1) *m -= 1;
        else {
            *m = 12;
            *y -= 1;
        }
    }

}

int main(void){

    int y, m, d;

    printf("年："); scanf("%d",&y);
    printf("月："); scanf("%d",&m);
    printf("日："); scanf("%d",&d);

    decrement_date(&y, &m, &d);

    printf("前の日は%d年%d月%d日です。\n", y, m, d);

    return(0);
}

