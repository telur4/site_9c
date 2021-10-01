// 回数不明ループ
#include <stdio.h>

int main(void)
{
    double money = 1;
    int month = 1;

    printf("ある小学生が、親に頼みました。\n");
    printf("「今月は1円、来月は2円、再来月は4円と、先月の倍額のお小遣いをちょうだい」\n");
    printf("さて、親が払う金額が100万円を超えるのは何か月目でしょうか？\n");
    while (money < 1000000) {
        printf("%02d 月目 : %7.0f 円\n", month, money);
	money *= 2;
	month++;
    }
    printf("%02d 月目に %7.0f 円となり、100万円を超える\n", month, money);
    return 0;
}
