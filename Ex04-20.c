// 縦横のタイトルがついた九九の表

#include <stdio.h>

int main(void)
{
	for (int i = -1 ; i <= 9 ; i++) {
		switch (i) {
			case -1 : printf("   | "); break;
			case 0  : printf("---+-"); break;
			default : printf(" %d | ",i); break;
		}
		
		for (int j = 1 ; j <= 9 ; j++) {
			switch (i) {
				case -1 : printf(" %d ",j); break;
				case 0  : printf("---"); break;
				default : {
					if ( i*j < 10 ) printf(" %d ",i*j);
					else printf("%d ",i*j);
					break;
				}
			}
		}
		printf("\n");
	}
}

