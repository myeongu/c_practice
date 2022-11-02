#include <stdio.h>
int factorize(int n)
{
    int cur = 2;
    char result;
    while (n != 1)
    {
        while (n % cur == 0)
        {
            n /= cur;
            if (n != 1)
                printf("%d X ", cur);
            else
                printf("%d", cur);
        };
        cur += 1;
    }
    return result;
}

int main()
{
    int n;
    scanf("%d", &n);
    factorize(n);

    return 1;
}