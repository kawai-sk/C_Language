// ファイルの存在確認
#include <stdio.h>
#define NAME_LEN	128

int main(void)
{
	FILE *fp;
	char fn[NAME_LEN];

	printf("ファイル名："); scanf("%s", fn);

	fp = fopen(fn, "w");						// ファイルのオープン

	if (fp == NULL)
		printf("そのファイルは存在しませんでした。\n");
	else {
		printf("そのファイルが存在したので中身を消去しました。\n");
		fclose(fp);								// ファイルのクローズ
	}

	return 0;
}
