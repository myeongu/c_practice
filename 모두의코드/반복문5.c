// 사용자로 부터 N 값을 입력 받고 1 부터 N 까지의 곱을 출력한다.
#include <stdio.h>

int main()
{
    int mul = 1, n, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        mul *= i;
    }
    printf("%d", mul);
    return 0;
}