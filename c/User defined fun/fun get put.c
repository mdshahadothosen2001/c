#include<stdio.h>
#include<math.h>
#include<string.h>

//User defined fun using gets() & puts() for input as a string

arrayFun(arr)
{
    puts(arr);
}
int main()
{
    char arr[20];
    printf("Enter Character String:\n");
    gets(arr);

    arrayFun(arr);

return 0;
}
