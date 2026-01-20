// ファイルの中身の行数を表示する

#include <stdio.h>

int main(void)
{
	FILE *fp;
	char fname[FILENAME_MAX];	// ファイル名
	int cnt = 0;

	printf("ファイル名：");
	scanf("%s", fname);

	if ((fp = fopen(fname, "r")) == NULL)					// オープン
		printf("\aファイルをオープンできません。\n");
	else {
		int ch;
		while ((ch = fgetc(fp)) != EOF) {
			if (ch == '\n') { cnt += 1; }
		}
			putchar(ch);
		fclose(fp);											// クローズ
	}
	printf("そのファイルの行数は%dです。\n", cnt);

	return 0;
}