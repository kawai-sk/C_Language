// まとめてセット・リセット・反転の実装

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

// 方針：セット・リセット・反転と同じ原理で実装
// Ex7-4の関数を繰り返すよりも計算量が減るはず

// 第posビットから第pos+n-1ビットをセット(1にする)
unsigned set_n(     unsigned x, int pos , int n ) {
	x = rrotate(x,pos-1);
	for (int i = 0; i < n; i++ ) {
		x = rrotate(x | 1U,1);
	}
	return lrotate(x,pos+n-1);
}

// 第posビットから第pos+n-1ビットをリセット(0にする)
unsigned reset_n(   unsigned x, int pos , int n ) {
	x = rrotate(x,pos-1);
	for (int i = 0; i < n; i++ ) {
		x = rrotate(x & ~1U,1);
	}
	return lrotate(x,pos+n-1);
}

// 第posビットから第pos+n-1ビットを反転
unsigned inverse_n( unsigned x, int pos , int n ) {
	x = rrotate(x,pos-1);
	for (int i = 0; i < n; i++ ) {
		x = rrotate(x ^ 1U,1);
	}
	return lrotate(x,pos+n-1);
}

int main(void)
{
	unsigned x;
	int pos,n;

	printf("非負の整数：");      scanf("%u",&x);
	printf("ビットの位置：");    scanf("%d",&pos);
	printf("操作するビット数："); scanf("%d",&n);

	printf("元の整数のビット表現：\n");
	print_bits(x); 
	putchar('\n');

	printf("第%dビットから第%dビットをセットすると：\n",pos,pos+n-1);
	print_bits(set_n(x, pos, n));
	putchar('\n');

	printf("第%dビットから第%dビットをリセットすると：\n",pos,pos+n-1);
	print_bits(reset_n(x, pos, n));
	putchar('\n');

	printf("第%dビットから第%dビットを反転すると：\n",pos,pos+n-1);
	print_bits(inverse_n(x, pos, n));
	putchar('\n');

	return 0;
}
