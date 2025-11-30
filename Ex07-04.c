// セット・リセット・反転の実装

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

/* Ex7-3で作った関数を利用 */

// 右にnビット回転：
unsigned rrotate(unsigned x, int n) {
	return (x >> n)|(x << (NUMBER-n));
}

// 左にnビット回転
unsigned lrotate(unsigned x, int n) {
	return (x << n)|(x >> (NUMBER-n));
}


// セット・リセット・反転の実装
// 方針：回転によって第posビットを第1ビットまで動かし，作業後，回転で戻す

// 第posビットをセット(1にする)
unsigned set(     unsigned x, int pos ) {
	return lrotate(rrotate(x,pos-1) | 1U, pos-1);
}

// 第posビットをリセット(0にする)
unsigned reset(   unsigned x, int pos ) {
	return lrotate(rrotate(x,pos-1) & ~1U, pos-1);
}

// 第posビットを反転
unsigned inverse( unsigned x, int pos ) {
	return lrotate(rrotate(x,pos-1) ^ 1U, pos-1);
}

int main(void)
{
	unsigned x;
	int pos;

	printf("非負の整数：");   scanf("%u",&x);
	printf("ビットの位置："); scanf("%d",&pos);

	printf("元の整数のビット表現：\n");
	print_bits(x); 
	putchar('\n');

	printf("第%dビットをセットすると：\n",pos);
	print_bits(set(x, pos));
	putchar('\n');

	printf("第%dビットをリセットすると：\n",pos);
	print_bits(reset(x, pos));
	putchar('\n');

	printf("第%dビットを反転すると：\n",pos);
	print_bits(inverse(x, pos));
	putchar('\n');

	return 0;
}
