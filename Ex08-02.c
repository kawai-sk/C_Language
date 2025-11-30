// 四項間の最大値の実装

#include <stdio.h>
#define max(x,y) (((x) > (y)) ? (x) : (y))

int main(void)
{
	int a = 5, b = 2, c = 3, d = 4;

	printf("%d\n",max(max(a,b),max(c,d))); // a,b,c,dのどれが最大だったとしても ( ? : ) が同じ回数だけ呼び出されそう．
	printf("%d\n",max(max(max(a,b),c),d)); // aまたはbが最大だった場合に ( ? : ) が呼び出される回数が多くなりそう：最悪の場合の計算量が多い？

	return 0;
}