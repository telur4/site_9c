// C言語では、条件による判定を行い場合、0を偽の値、0以外を真の値、と呼んでいる
#include <stdio.h>

int main(void)
{
    int num;
    printf("整数を入力してください >> ");
    scanf("%d", &num);
    if (num == 10) {
        printf("入力値は10です\n");
    } else if (num > 10) {
        printf("入力値は10より大きいです\n");
    } else {
        printf("入力値は10より小さいです\n");
    }
    return 0;
}
