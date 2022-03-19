#include <stdio.h>
#include <math.h>

//三角形の面積を求める関数
double area(double A, double B, double C){

    double s, heron;

    s = (A + B + C) / 2;
    heron = sqrt(s * (s - A) * (s - B) * (s - C));
    
    return(heron);
}

int main(void){

    int a, b, c, min, mid, max;

    puts("三角形の３辺 a,b,c を整数で入力してください。");
    printf("a="); scanf("%d", &a);
    printf("b="); scanf("%d", &b);
    printf("c="); scanf("%d", &c);

    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    if(max == a){
        mid = (b > c) ? b : c; 
        min = (b < c) ? b : c;
    } else if(max == b){
        mid = (c > a) ? c : a;
        min = (c < a) ? c : a;
    } else{
        mid = (a > b) ? a : b;
        min = (a < b) ? a : b;
    }

    if(max >= mid + min){
        puts("三角形ができません。");
        return(0);
    }

    if(a == b && b == c) puts("正三角形です。");
    else if(max == mid || mid == min) puts("二等辺三角形です。");
    else puts("不等辺三角形です。");

    if( max * max == mid * mid + min * min) puts("直角三角形です。");
    else if( max*max < mid * mid + min * min ) puts("鋭角三角形です。");
    else puts("鈍角三角形です。");

    printf("この三角形の面積は%.2fです。\n", area(a, b, c));

    return(0);
}