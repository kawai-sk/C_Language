#include <stdio.h>

int main(void)
{
    int n;
    printf("身長を入力せよ：");
    scanf("%d", &n);
    printf("標準体重は%.1fです。\n", (n-100)*0.9);
    return 0;
}