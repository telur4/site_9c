// 入力用の関数
#include <stdio.h>

int main(void)
{
    int data1;
    printf("整数を入力してください >> ");
    // 入力部分
    scanf("%d", &data1);
    printf("%d\n", data1);

    // 実数の入力
    double data2;
    printf("実数を入力してください >> ");
    scanf("%lf", &data2);
    printf("%f\n", data2);

    // 複数の入力
    int data3, data4;
    printf("整数を2回入力してください >> ");
    scanf("%d%d", &data3, &data4);
    printf("%d , %d\n", data3, data4);
    return 0;
}
