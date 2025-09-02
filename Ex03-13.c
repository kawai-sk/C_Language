/* 教科書のソースコードList3-18を利用
教科書ではこの時点で未記載だが, case n は開始場所を指定するだけなので, 複数のcaseをまとめて処理することもできることを検索して学んだ。
*/

// 読み込んだ月の季節を表示

#include <stdio.h>

int main(void)
{
	int month;					// 月

	printf("何月ですか：");
	scanf("%d", &month);

	switch (month) {
		case 1 : 
		case 2 : 
		case 12 : printf("%d月は冬です。\n", month); break;
		case 3 :
		case 4 : 
		case 5 : printf("%d月は春です。\n", month); break;
		case 6 : 
		case 7 : 
		case 8 : printf("%d月は夏です。\n", month); break;
		case 9 :
		case 10 :
		case 11 : printf("%d月は秋です。\n", month); break;
		default : printf("%d月はありませんよ!!\a\n", month);
	}

	/* 元のコード (if文) */
	// if (month >= 3 && month <= 5)					// 春：3以上かつ5以下
	// 	printf("%d月は春です。\n", month);
	// else if (month >= 6 && month <= 8)				// 夏：6以上かつ8以下
	// 	printf("%d月は夏です。\n", month);
	// else if (month >= 9 && month <= 11)				// 秋：9以上かつ11以下
	// 	printf("%d月は秋です。\n", month);
	// else if (month == 1 || month == 2 || month == 12)	// 冬：1または2
	// 	printf("%d月は冬です。\n", month);				//      または12
	// else
	// 	printf("%d月はありませんよ!!\a\n", month);

	return 0;
}
