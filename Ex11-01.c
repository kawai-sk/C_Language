// ポインタによる文字列の書きかえ
// p = "456" + 1 により、p は '4' の位置の1つ先の '5' の位置を指す．

#include <stdio.h>

int main(void)
{
	char *p = "123";

	printf("p = \"%s\"\n", p);

	p = "456" + 1;		// ＯＫ！

	printf("p = \"%s\"\n", p);

	return 0;
}
