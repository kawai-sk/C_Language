// 配列を反転する

#include <stdio.h>

void rev_intary(int v[], int n)
{
    for (int m = 0; m < n/2; m++) {
        int tmp = v[m];
        v[m] = v[n-m-1];
        v[n-m-1] = tmp;
    }
}

int main(void)
{
    int n;
    printf("要素数：");
    scanf("%d",&n);
    int x[n];

    for (int i = 0; i < n; i++) {
        printf("x[%d]:",i);
        scanf("%d",&x[i]);
    }

    rev_intary(x, n);
    printf("反転しました。\n");

    for (int i = 0; i < n; i++) {        // 要素の値を表示
        printf("x[%d] = %d\n", i, x[i]);
    }

    return 0;
}
