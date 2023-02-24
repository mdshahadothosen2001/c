#include<stdio.h>

int myReturn(int x, int y)
{
    return x+y;
}

int main()
{
  int result;
  result=myReturn(3,5);
  printf("Result: %d",result);

    return 0;
}
