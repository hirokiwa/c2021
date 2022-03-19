#include <stdio.h>

int main(void)
{
    int month;

    printf("何月ですか："); scanf("%d", &month);

    switch (month)
    {
    case 3 : printf("%d月は春です。\n", month); break;
    case 4 : printf("%d月は春です。\n", month); break;
    case 5: printf("%d月は春です。\n", month); break;    
    case 6: printf("%d月は夏です。\n", month); break;
    case 7: printf("%d月は夏です。\n", month); break;
    case 8: printf("%d月は夏です。\n", month); break;
    case 9: printf("%d月は秋です。\n", month); break;
    case 10: printf("%d月は秋です。\n", month); break;
    case 11: printf("%d月は秋です。\n", month); break;
    case 12: printf("%d月は冬です。\n", month); break;
    case 1: printf("%d月は冬です。\n", month); break;
    case 2: printf("%d月は冬です。\n", month); break;    
    default: printf("%d月はありませんよ。\n", month); break;
    }

    return (0);
}

// 何月ですか：4
// 4月は春です。
