// 季節を表す列挙体

#include <stdio.h>

enum season { spring, summer, autumn, winter };

//--- 月を選ぶ ---//
enum season select(void)
{
	int tmp;

	do {
		printf("何月が好きですか？：");
		scanf("%d", &tmp);
	} while (tmp < 1 || tmp > 12);
	return (((tmp/3)+3)%4);
}

int main(void)
{
	enum season selected;

	do {
		switch (selected = select()) {
			case spring : printf("それは春ですね。\n"); break;
			case summer : printf("それは夏ですね。\n"); break;
			case autumn : printf("それは秋ですね。\n"); break;
			case winter : printf("それは冬ですね。\n"); break;
		}
	} while (0);

	return 0;
}
