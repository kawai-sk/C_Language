// 整数型の大きさを表示する

#include <stdio.h>

/* この実行環境では
sizeof(char)      = 1
sizeof(short)     = 2
sizeof(int)       = 4
sizeof(long)      = 8
sizeof(long long) = 8
（サンプルコードlist0703.cの結果）*/

int main(void)
{
	int n = 0;
	printf("sizeof 1           = %zu\n", sizeof 1);           /* 定数1の型intの大きさは 4 */
	printf("sizeof+1           = %zu\n", sizeof+1 );          /* 定数+1の型intの大きさは 4 */
	printf("sizeof-1           = %zu\n", sizeof-1);           /* 定数-1の型intの大きさは 4 */
	printf("sizeof(unsigned)-1 = %zu\n", sizeof(unsigned)-1); /* 型unsigned intの大きさから1を引くと 4-1 = 3 */
	printf("sizeof(double)-1   = %zu\n", sizeof(double)-1 );  /* 型doubleの大きさから1を引くと 8-1 = 7 */
	printf("sizeof((double)-1) = %zu\n", sizeof((double)-1)); /* (double + int(- 1))の型doubleの大きさは 8 */
	printf("sizeof n+2         = %zu\n", sizeof n+2 );        /* 型intの大きさに2を足すと 4+2 = 6 */
	printf("sizeof(n+2)        = %zu\n", sizeof(n+2));        /* (int n + int 2)の型intの大きさは 4 */
	printf("sizeof(n+2.0)      = %zu\n", sizeof(n+2.0));      /* (int n + double 2.0)の型doubleの大きさは 8 */

	return 0;
}
