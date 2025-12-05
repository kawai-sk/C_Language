// 配列に文字列を格納して表示（その２：初期化）
// List9-3のソースコードを利用

#include <stdio.h>

int main(void)
{
	char str[] = "ABC\0DEF";		// \0までが文字列とみなされる

	printf("文字列strは\"%s\"です。\n", str);	// 表示

	return 0;
}
