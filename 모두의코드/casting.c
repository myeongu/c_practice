#include <stdio.h>

int main() {
	float f;
	int i;
	printf("실수를 입력하시오 : ");
	scanf("%f", &f);
	i = (int)((f - (int)f)*100);
	printf("i=%d\n", i);
	
	return 0;
}
