// 1000 이하의 3 또는 5 의 배수인 자연수들의 합
#include <stdio.h>

int main()
{
    int i, sum = 0;
    for (i = 1; i <= 1000; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }
    printf("%d", sum);
    return 0;
}