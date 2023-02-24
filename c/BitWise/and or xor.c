/*
bitwise operations
*/
#include<stdio.h>
int main()
{
    int a,b,and,or,xor;
    scanf("%d%d",&a,&b);

    and=a&b;
    or=a|b;
    xor=a^b;

    printf("Result for AND operation: %d\n",and);
    printf("Result for OR operation: %d\n",or);
    printf("Result for XOR operation: %d",xor);

    return 0;
}
