// 역 삼각형을 출력한다.
#include <stdio.h>

int main()
{
    int i, j, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j <= i - 1; j++)
        {
            printf(" ");
        };
        for (j = 0; j < 2 * (n - i + 1) - 1; j++)
        {
            printf("*");
        };
        printf("\n");
    }
    return 0;
}