#include <stdio.h>

int main(void)
{
    int x = 3.14;

    printf("int型変数xを初期値%dで初期化した場合の挙動です。\n",x); // 小数点以下を切り捨てられた値が表示された。
    return 0;
}