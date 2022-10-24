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
    for (int j = 0; j < arr[i]; j++)
    {
      printf("|");
    }
    printf("\n");
  }

  for (i = 0; i < total; i++)
  {
    printf("%d ", arr[i]);
  }
}
