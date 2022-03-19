#include <stdio.h>
#include <math.h>

// 2つの整数の最大公約数を返す関数
int gcd(int z1, int z2){

    if(z1 < 0) z1 *= - 1;
    if(z2 < 0) z2 *= - 1;

    if(z1 < z2){
        int replace = z1;
        z1 = z2;
        z2 = replace;
    }

    while((z1 % z2) != 0){
        int replace = z1;
        z1 = z2;
        z2 = replace % z2;
    }

    return(z2);
}

int main(void){

    int x1, y1, x2, y2;

    puts("2つの座標点(x1,y1),(x2,y2)を整数で入力してください。");
    printf("x1="); scanf("%d", &x1);
    printf("y1="); scanf("%d", &y1);
    printf("x2="); scanf("%d", &x2);
    printf("y2="); scanf("%d", &y2);

    int q = y1 - y2;
    int p = x1 - x2;

    if(p < 0){
        p *= (-1);
        q *= (-1);
    }
    
    int r = p * y1 - q * x1;

    if(p == 0){
        printf("直線の式：x=%d\n",x1);
        printf("x軸となす角度：90.00°\n");
        printf("線分の長さ：%.2f\n", sqrt(q * q));
        
        return(0);
    }//x軸に垂直な直線

    if(q == 0) printf("直線の式：y=%d", y1);
    else if(p / gcd(p,q) == 1 ) printf("直線の式：y=%dx", q / gcd(p,q));
    else printf("直線の式：y=(%d/%d)x", q / gcd(p,q), p / gcd(p,q));

    if(r == 0 || q == 0) printf("\n");
    else if(p / gcd(r, p) == 1 || p / gcd(-r, p) == 1) printf("%+d\n", r / gcd(r, p));
    else if(r > 0) printf("+(%d/%d)\n", r / gcd(r, p), p / gcd(r, p));
    else printf("-(%d/%d)\n", -r / gcd(-r, p), p / gcd(-r, p));

    printf("x軸となす角：%.2f°\n", (double) fabs(atan((double) q / p) * 180 / M_PI));
    printf("線分の長さ：%.2f\n", sqrt(p * p + q * q));

    return(0);
}