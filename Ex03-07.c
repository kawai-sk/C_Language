#include <stdio.h>

int main(void)
{
    int n1,n2,n3,n4;
    printf("四つの整数を入力してください：");
    scanf("%d%d%d%d", &n1, &n2, &n3, &n4);

    int max = n1;
    if (max < n2) max = n2;
    if (max < n3) max = n3;
    if (max < n4) max = n4;

    printf("それらの最大値は%dです。\n", max);
    return 0;
}