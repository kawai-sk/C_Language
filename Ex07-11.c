// floatとintのインクリメントを見比べる

/*
考察：
float型で表現された0.01は真の0.01よりもほんのわずか小さいため，その微小な差が累積してsum_floatは真の総和50.50よりも0.00015小さくなる．
int型で表現した場合，各i/100は真のi/100に比べてほんのわずか大きかったり小さかったりする．それらの微小な差が累積したり相殺したりして，sum_intは真の総和50.50よりも0.00004大きくなる．
このずれの大きさの差が，int型で表現した場合に微差が相殺している可能性を補強している．
*/

#include <stdio.h>

int main(void)
{
	float sum_float = 0.0, sum_int = 0.0;

	for (float x = 0.0; x <= 1.0; x += 0.01) sum_float += x;
	for (int i = 0; i <= 100; i++) sum_int += i/100.0;

	printf("float型でインクリメントすると%f\n",sum_float); // sum_float = 50.499985
	printf("int型でインクリメントすると%f\n",sum_int);     // sum_int   = 50.500004

	return 0;
}