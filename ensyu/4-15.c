#include <stdio.h>

int main(void)
{
    int start, end, interval;

    puts("表示する身長の範囲を整数で入力してください。"); 
    printf("何cmから："); scanf("%d", &start);
    printf("何cmまで："); scanf("%d", &end);
    printf("何cmごと："); scanf("%d", &interval);

    for( ; start <= end; start += interval) {
        double weight = ( start - 100 ) * 0.9;
        printf("%dcm %.2fkg\n", start, weight);
    }

    return (0);
}

// 表示する身長の範囲を整数で入力してください。
// 何cmから：155
// 何cmまで：190
// 何cmごと：5
// 155cm 49.50kg
// 160cm 54.00kg
// 165cm 58.50kg
// 170cm 63.00kg
// 175cm 67.50kg
// 180cm 72.00kg
// 185cm 76.50kg
// 190cm 81.00kg