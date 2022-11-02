/* 포인터의 대입 */
#include <stdio.h>
int main()
{
    int a;
    int *pa = &a;
    int *pb;

    *pa = 3;
    pb = pa;

    printf("pa 가 가리키고 있는 것 : %d \n", *pa);
    printf("pb 가 가리키고 있는 것 : %d \n", *pb);
    printf("a가 가리키는 값 : %d \n", a);

    return 0;
}