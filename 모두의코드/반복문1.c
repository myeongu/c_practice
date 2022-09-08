// N 줄인 삼각형을 출력한다.
// 단, 사용자로 부터 임의의 N 을 입력 받는다. 아래는 N = 3 일 때의 출력 예시 이다.
#include <stdio.h>

int main()
{
    int i, j, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        };
        for (j = 0; j < 2 * i - 1; j++)
        {
            printf("*");
        };
        printf("\n");
    }

    return 0;
}