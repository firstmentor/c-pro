#include <stdio.h>

int main()
{
  int x = 10;

   x += 5;

  // x -= 3;
  // x *= 4;
  // x /=6;
  x %=2;

  printf("%d", x);
  return 0;
}