// 正方形の辺の長さを求める

#include <math.h>
#include <stdio.h>

int main(void)
{
	double S;

	printf("実数を入力："); scanf("%lf", &S);

	printf("面積%fの正方形の一辺の長さは%fです。\n", S, sqrt(S));

	return 0;
}
