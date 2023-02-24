#include <stdio.h>

int main() {
  char myNumbers[] = { 's', 'a','h','a','h' };
  char greeting[30]="Hello Md. Shahadot Hosen";
  int i;


printf("%s \n",greeting);
printf("\n %c\n",greeting[0]);


  for (i = 0; i < 4; i++) {
    printf("%c\n", myNumbers[i]);
  }

  return 0;
}
