#include <stdio.h>

int main () {
  int guess = 5; /* 소수의 배열 */
  int prime[1000];

  int index = 1; /* for 문 변수 */
  int i; /* 소수 판별 변수 */
  int ok;
  prime[0] = 2;
  prime[1] = 3;

  for (;;) {
    ok = 0;
    for (i = 0; i <= index; i++) {
      if (guess % prime[i] != 0) {
        ok++;
      } else {
        break;
      }
    }
    if (ok == (index + 1)) {
      index++;
      prime[index] = guess;
      printf("소수 : %d \n", prime[index]);
      if (index == 999) break;
    }
    guess += 2;
  }
  return 0;
}

