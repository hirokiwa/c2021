#include <stdio.h>
#include <math.h>
int main(void)
{
    int a, b, c;
    // double s = (a + b + c) / 2;
    // double S = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("a");
    scanf("%d", &a);
    printf("b");
    scanf("%d", &b);
    printf("c");
    scanf("%d", &c);

    double s = (double)(a + b + c) / 2;
    double S = sqrt(s * (s - a) * (s - b) * (s - c));

    while (a == 0 || b == 0 || c == 0)
    {
        printf("aの数値を入力して下さい。");
        scanf("%d", &a);
        if (a == 0)
        {
            printf("これはa＝0の時です。");
        }
        printf("bの数値を入力して下さい。");
        scanf("%d", &b);
        if (b == 0)
        {
            printf("これはb＝0の時です。");
        }
        printf("cの数値を入力して下さい。");
        scanf("%d", &c);
        if (c == 0)
        {
            printf("これはc＝0の時です。");
        }
    }

    if (a > b)
    {
        // int x = a, b = c, c = x;
        int x = a; 
        a = b;
        b = x;
    }
    if (b > c)
    {
        // int x = b, b = c, c = x;
        int x = b;
        b = c;
        c = x;

    }
    if (a > b)
    {
        // int x = a, a = b, b = x;
        int x = a;
        a = b;
        b = x;
    }

    // if ((a + b > c && a + c > b && b + c > a) && (a > 0 && b > 0 && c > 0))
    if ((a + b > c) && (a > 0 && b > 0 && c > 0))
    {
        // 二等辺より正三角形を先に判定しないと
        if (a == b && b == c)
        {
            printf("正三角形\n");
        }
        // else if (a == b || b == c || a == b)
        else if (a == b || b == c)
        {
            printf("二等辺三角形\n");
        }
        else
        {
            printf("不等辺三角形\n");
            // 改行入れようね
        }
        //↑ 不等辺三角形はこっち！！
        
        // ここはelseいらない
        if (a * a + b * b == c * c)
        {
            printf("直角三角形\n");
        }
        else if (a * a + b * b > c * c)
        {
            printf("鋭角三角形\n");
        }
        else if (a * a + b * b < c * c)
        {
            printf("鈍角三角形\n");
        }
        
    }
    else
    {
        printf("三角形は作れません。\n");
    }

    printf("三角形の面積は%lfです。\n", S);

    return (0);
}
