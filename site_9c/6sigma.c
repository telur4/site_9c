#include <stdio.h>

int main(void)
{
    int min, max, sum;

    printf("これはシグマを計算するプログラムです\n");
    // 入力部分
    printf("最小値を整数で入力してください >> ");
    scanf("%d", &min);
    printf("最大値を整数で入力してください >> ");
    scanf("%d", &max);

    // 計算部分
    sum = (min + max) * (max - min +1) / 2;

    // 表示部分
    printf("%d～%dの合計は%dです\n", min, max, sum);
    return 0;
}
