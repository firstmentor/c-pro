#include <stdio.h>

int main() {
  int x =   10;
  int y = 10; //0

  
  // Returns 1 (true) because 5 is greater than 3 AND 5 is less than 10
  printf("%d\n", x && y);
  printf("%d\n",!y);
  printf("%d", x > 3 && x < 50);
  printf("%d", x > 3 || x < 4);
  printf("%d", !(x > 3 && x < 60));
  return 0;
}