#include <stdio.h>

int main(void)
{
    int a = 72, n;
    double b = 7.2, x;
    printf("整数を入力せよ：");
    scanf("%d", &n);
    printf("実数を入力せよ：");
    scanf("%lf", &x);
    printf("整数定数%d, 浮動小数点定数%f, 整数変数%d, 実数変数%fを考えます。\n", a, b, n, x);
    printf("整数定数%dと浮動小数点定数%fの和は%f, 差は%f, 積は%f, 商は%f, 剰余は計算不能です。\n", a,b,a+b, a-b,a*b,a/b);
    printf("整数定数%dと整数変数%dの和は%d, 差は%d, 積は%d, 商は%d, 剰余は%dです。\n", a,n,a+n,a-n,a*n,a/n,a%n);
    printf("整数定数%dと実数変数%fの和は%f, 差は%f, 積は%f, 商は%f, 剰余は計算不能です。\n", a,x,a+x,a-x,a*x,a/x);
    printf("浮動小数点定数%fと整数変数%dの和は%f, 差は%f, 積は%f, 商は%f, 剰余は計算不能です。\n", b,n,b+n,b-n,b*n,b/n);
    printf("浮動小数点定数%fと実数変数%fの和は%f, 差は%f, 積は%f, 商は%f, 剰余は計算不能です。\n", b,x,b+x,b-x,b*x,b/x);
    printf("整数変数%dと実数変数%fの和は%f, 差は%f, 積は%f, 商は%f, 剰余は計算不能です。\n", n,x,n+x,n-x,n*x,n/x);
    return 0;
}