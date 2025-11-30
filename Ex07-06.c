// オーバーフローしないことの確認

#include <stdio.h>
#include <limits.h>

int main(void)
{
	unsigned x = UINT_MAX; //本環境での符号無し整数型の値の最大値

	printf("符号無し整数型で表現できる最大値：%u\n", x);
	printf("符号無し整数型で表現できる最大値+1：%u\n", x+1);
	printf("符号無し整数型で表現できる最大値+2：%u\n", x+2);

	return 0;
}
