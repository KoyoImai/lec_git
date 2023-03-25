#include <stdio.h>

int main(void)
{
  int x;
  int *px;
  x = 10;
  px = &x;

  printf("%d %ls\n", x, px);

  return 0;
}
