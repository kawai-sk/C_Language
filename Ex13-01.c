// ファイルの存在確認
#include <stdio.h>
#define NAME_LEN	128

int main(void)
{
	FILE *fp;
	char fn[NAME_LEN];

	printf("ファイル名："); scanf("%s", fn);

	fp = fopen(fn, "r");						// ファイルのオープン

	if (fp == NULL)
		printf("そのファイルは存在しません。\n");
	else {
		printf("そのファイルは存在しますEx13-01.c。\n");
		fclose(fp);								// ファイルのクローズ
	}

	return 0;
}
