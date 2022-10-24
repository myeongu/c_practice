#include <stdio.h>

int main()
{
  int total;
  printf("전체 학생수 : ");
  scanf("%d", &total);
  int arr[total];
  int res_arr[total];
  int i, temp;

  for (i = 0; i < total; i++)
  {
    printf("%d 번째 학생의 성적은?", i + 1);
    scanf("%d", &arr[i]);
  }

  for (i = 0; i < total; i++)
  {
    for (int j = i + 1; j < total; j++)
    {
      if (arr[j] > arr[i])
      {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  for (i = 0; i < total; i++)
  {
    printf("%d ", arr[i]);
  }
}
