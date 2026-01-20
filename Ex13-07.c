// ファイルの中身の数字文字の数を表示する

#include <stdio.h>

int main(void)
{
	FILE *fp;
	char fname[FILENAME_MAX];	// ファイル名
	int cnt[10] = {0};

	printf("ファイル名：");
	scanf("%s", fname);

	if ((fp = fopen(fname, "r")) == NULL)					// オープン
		printf("\aファイルをオープンできません。\n");
	else {
		int ch;
		while ((ch = fgetc(fp)) != EOF) {
			switch (ch) {
				case '0': cnt[0] += 1; break;
				case '1': cnt[1] += 1; break;
				case '2': cnt[2] += 1; break;
				case '3': cnt[3] += 1; break;
				case '4': cnt[4] += 1; break;
				case '5': cnt[5] += 1; break;
				case '6': cnt[6] += 1; break;
				case '7': cnt[7] += 1; break;
				case '8': cnt[8] += 1; break;
				case '9': cnt[9] += 1; break;
			}
		}
			putchar(ch);
		fclose(fp);											// クローズ
	}
	for (int i = 0; i < 10; i++) {
		printf("そのファイルの数字文字%dの個数は%dです。\n", i,cnt[i]);
	}

	return 0;
}