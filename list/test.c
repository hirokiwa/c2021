#include <stdio.h>
#include <math.h>

double cone_surface(double r, double h){

    double c = sqrt(h * h + r * r);

    return(M_PI * c * r + M_PI * r * r);
}

int main(void){

    double r, h;

    printf("半径：");
    scanf("%lf", &r);
    printf("高さ：");
    scanf("%lf", &h);

    printf("表面積は%.2fです。\n", cone_surface(r, h));

    return(0);
}

// 半径：1.0
// 高さ：1.0
// 表面積は7.58です。

// 半径：1.5
// 高さ：4.0
// 表面積は16.09です。

// 半径：3.0
// 高さ：3.14
// 表面積は68.26です。

// 半径：5.0
// 高さ：10.0
// 表面積は254.16です。