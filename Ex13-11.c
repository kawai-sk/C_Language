// 円周率の値をバイナリファイルに書き込んで読み取る

#include <stdio.h>
#define NUMBER 10

int main(void)
{
	FILE *fp;
	double data[NUMBER] = {1.2,4,5,6.3,2,4,56,1,0,90};

	for (int i = 0; i < NUMBER; i++) {
		printf("配列dataの第%d要素の値は%lfです。\n",i,data[i]);
	}

	// 書込み
	if ((fp = fopen("DATA.bin", "wb")) == NULL)		// オープン
		printf("\aファイルをオープンできません。\n");
	else {
		fwrite(data, sizeof(double), NUMBER, fp);			// dataを書き込む
		fclose(fp);
	}												// クローズ

	// 読取り
	if ((fp = fopen("DATA.bin", "rb")) == NULL)		// オープン
		printf("\aファイルをオープンできません。\n");
	else {
		fread(data, sizeof(double), NUMBER, fp);			// dataに読み取る
		for (int i = 0; i < NUMBER; i++) {
			printf("ファイルから読み取った配列の第%d要素の値は%lfです。\n",i,data[i]);
		}
		fclose(fp);									// クローズ
	}

	return 0;
}
