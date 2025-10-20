// 配列を反転して格納

#include <stdio.h>

void intary_rcpy(int v1[], const int v2[], int n)
{
    for (int m = 0; m < n; m++) v1[m] = v2[n-m-1];
}

int main(void)
{
    int n;
    printf("要素数：");
    scanf("%d",&n);
    int x[n],y[n];

    for (int i = 0; i < n; i++) {
        printf("x[%d]:",i);
        scanf("%d",&x[i]);
    }

    intary_rcpy(y,x,n);
    printf("反転しました。\n");

    for (int i = 0; i < n; i++) {        // 要素の値を表示
        printf("y[%d] = %d\n", i, y[i]);
    }

    return 0;
}
