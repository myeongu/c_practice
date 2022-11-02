/* 입력 받은 배열의 10 개의 원소를 크기 순으로 출력 */
#include <stdio.h>

int sort_number(int *parr);
int main()
{
    int arr[10];
    int result_arr[10];
    int i;

    /* 사용자로 부터 원소를 입력 받는다. */
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("배열 크기 순 : \n");
    //   result_arr =
    sort_number(arr);
    for (i = 0; i < 10; i++)
    {
        printf("    %d", arr[i]);
    }
    return 0;
}
int sort_number(int *parr)
{
    int i, temp;
    //   int res_arr[10];

    for (i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (parr[j] > parr[i])
            {
                temp = parr[i];
                parr[i] = parr[j];
                parr[j] = temp;
            }
        }
    }

    return 0;
}