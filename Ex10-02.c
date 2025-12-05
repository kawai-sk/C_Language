// 前日・翌日

#include <stdio.h>

// うるう年なら 1, そうでなければ 0
int leap_year(int y) {
	if (y%400 == 0) {
		return 1;
	} else if (y%100 == 0) {
		return 0;
	} else if (y%4 == 0) {
		return 1;
	} else {
		return 0;
	}
}

// その年その月の日数
int end_day(int y, int m) {
	int d = -1;
	switch (m) {
		case 1  : 
		case 3  :
		case 5  :
		case 7  :
		case 8  :
		case 10 :
		case 12 : d = 31; break;
		case 4  :
		case 6  :
		case 9  :
		case 11 : d = 30; break;
		case 2  : d = 28 + leap_year(y); break;
	}
	return d;
}

// 前の日
void decrement_date(int *y, int *m, int *d)
{
	if (*d > 1) {
		*d -= 1;
	} else {
		if (*m > 1) {
			*m -= 1;
		} else {
			*y -= 1; *m = 12;
		}
		*d = end_day(*y, *m);
	}
}

// 次の日
void increment_date(int *y, int *m, int *d)
{
	if (*d < end_day(*y, *m)){
		*d += 1;
	} else {
		if (*m == 12) {
			*y += 1; *m = 1;
		} else {
			*m += 1;
		}
		*d = 1;
	}
}


int main(void)
{
	int i,y,m = -1,d = -1;
	printf("今年は何年ですか？："); scanf("%d",&y);
	while (1) {
		printf("今月は何月ですか？：");
		scanf("%d",&m);
		if ( 1 <= m && m <= 12 ) {
			break;
		} else {
			printf("%d年%d月は実在しません。\n",y,m);
		}
	}
	while (1) {
		printf("今日は何日ですか？：");
		scanf("%d",&d);
		if ( 1 <= d && d <= end_day(y,m) ) {
			break;
		} else {
			printf("%d年%d月%d日は実在しません。\n",y,m,d);
		}
	}
	printf("%d年%d月%d日は実在します。\n",y,m,d);

	while (1) {
		printf("0 or 1 [0…前日 / 1…翌日] = ");
		scanf("%d",&i);
		if (i == 0 || i == 1) {
			break;
		} else {
			printf("不正な入力です。\n");
		}
	}

	printf("%d年%d月%d日の",y,m,d);
	if (i == 0) { printf("前"); decrement_date(&y,&m,&d); }
	if (i == 1) { printf("翌"); increment_date(&y,&m,&d); }
	printf("日は%d年%d月%d日です。\n",y,m,d);

	return 0;
}
