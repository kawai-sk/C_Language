// ビット回転

#include <stdio.h>
#define NUMBER 32 //　unsigned型のビット数　=　32

/* list7-6の関数を利用 */

//--- 整数x中のセットされたビット数を返す ---//
int count_bits(unsigned x)
{
	int bits = 0;
	while (x) {
		if (x & 1U) bits++;
		x >>= 1;
	}
	return bits;
}

//--- unsigned型のビット数=32 ---//
int int_bits(void)
{
	return count_bits(~0U);
}

//--- unsigned型のビット内容を表示 ---//
void print_bits(unsigned x)
{
	for (int i = int_bits() - 1; i >= 0; i--)
		putchar(((x >> i) & 1U) ? '1' : '0');
}

// 右にnビット回転：シフト結果とシフトで弾き出されたビット群の論理和．
unsigned rrotate(unsigned x, int n) {
	return (x >> n)|(x << (NUMBER-n));
}

// 左にnビット回転
unsigned lrotate(unsigned x, int n) {
	return (x << n)|(x >> (NUMBER-n));
}

int main(void)
{
	unsigned x;
	int n;

	printf("非負の整数："); scanf("%u",&x);
	printf("ビット数：");   scanf("%d",&n);

	printf("元の整数のビット表現：\n");
	print_bits(x); 
	putchar('\n');

	printf("右に%dビット回転すると：\n",n);
	print_bits(rrotate(x, n));
	putchar('\n');

	printf("左に%dビット回転すると：\n",n);
	print_bits(lrotate(x, n));
	putchar('\n');

	return 0;
}
