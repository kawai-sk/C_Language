#include <stdio.h>

int main(void)
{
    int a,b;
    puts("二つの整数を入力せよ。");
    printf("整数a：");
    scanf("%d", &a);
    printf("整数b：");
    scanf("%d", &b);
    printf("aの値はbの%f%%です。\n", a*100.0/b);
    return 0;
}