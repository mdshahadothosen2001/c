#include <stdio.h>

int main() {
  char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
  char greetings2[] = "Hello World!";
  char name[30]="Md. Shahadot Hosen";

  printf("%lu\n", sizeof(greetings));
  printf("%lu\n", sizeof(greetings2));
  printf("%lu",sizeof(name));

  return 0;
}
