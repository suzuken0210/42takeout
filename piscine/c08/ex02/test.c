#include "ft_abs.h"
#include <stdio.h>

int main(void) {
  int a = -5;
  int b = 10;

  printf("ABS(%d) = %d\n", a, ABS(a));  // 出力: ABS(-5) = 5
  printf("ABS(%d) = %d\n", b, ABS(b));  // 出力: ABS(10) = 10

  return 0;
}