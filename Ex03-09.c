#include <stdio.h>

int main(void)
{
    int n1,n2,n3;
    printf("三つの整数を入力してください：");
    scanf("%d%d%d", &n1, &n2, &n3);

    int min = n1;
    if (min > n2) min = n2;
    if (min > n3) min = n3;

    /* n1 < n2 の場合, 最小値の候補は n1 or n3 */
    /* n1 < n2 でない場合, 最小値の候補は n2 or n3 */
    /* 最小値の候補を比較して小さい方を出力 */
    printf("それらの最小値は%dです。\n", n1 < n2 ? (n1 < n3 ? n1 : n3) : (n2 < n3 ? n2 : n3) );
    return 0;
}