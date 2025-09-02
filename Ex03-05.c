#include <stdio.h>

int main(void)
{
    printf("等価演算子を含む式1==0は%dを生成します。\n", 1==0);
    printf("等価演算子を含む式0==0は%dを生成します。\n", 0==0);
    printf("関係演算子を含む式1>0は%dを生成します。\n", 1>0);
    printf("関係演算子を含む式1<0は%dを生成します。\n", 1<0);
    return 0;
}