// 1000000 이하의 피보나치 수열
// ( N 번째 항이 N - 1 번째 항과 N - 2 번째 항으로 표현되는 수열, 시작은 1,1,2,3,5,8,...)의
// 짝수 항들의 합을 구한다.
#include <stdio.h>

int main()
{
    int fibo_sum = 1, fibo, fibo_first = 1, fibo_second = 1, i = 3;
    while (fibo <= 1000000)
    {
        fibo = fibo_first + fibo_second;
        if (i % 2 == 0)
        {
            fibo_sum += fibo;
        }
        fibo_first = fibo_second;
        fibo_second = fibo;

        i++;
    }
    printf("%d", fibo_sum);
    return 0;
}