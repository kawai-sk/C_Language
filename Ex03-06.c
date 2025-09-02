#include <stdio.h>

int main(void)
{
    int n1,n2,n3;
    printf("三つの整数を入力してください：");
    scanf("%d%d%d", &n1, &n2, &n3);

    int min = n1;
    if (min > n2) min = n2;
    if (min > n3) min = n3;

    printf("それらの最小値は%dです。\n", min);
    return 0;
}