void myFunction() { // declaration
  // the body of the function (definition)
}


#include<stdio.h>

int myValue(int num)
{
    return num*num+1;
}
int myReturn(int x, int y)
{
    return x+y;
}
int main()
{
    printf("Return value: %d",myValue(3));
    printf("\nReturn Value: %d",myValue(5));
    printf("\nReturn Value: %d", myValue(2));

    printf("\n Return My Result: %d",myReturn(3,5));

    return 0;
}
