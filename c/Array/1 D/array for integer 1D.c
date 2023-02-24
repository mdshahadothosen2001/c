#include <stdio.h>

int main() {
  int numbers[] = {25, 50, 75, 100};
  printf("%d", numbers[0]);
  printf("\n%d", numbers[3]);

  numbers[0] = 33;
printf("\n%d", numbers[0]);
  return 0;
}
