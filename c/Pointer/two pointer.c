#include<stdio.h>
int main()
{
    int VAR;
    VAR=500;
    int* ptr;
    ptr=&VAR;
     int **pptr;
     pptr=&ptr;



    printf("Address of AVR variable: %d",&VAR);
    printf("\n Value From VAR: %d\n",VAR);

    printf("\nAddress of ptr Address: %d",&ptr);
    printf("\nValue what have in ptr: %d",ptr);
    printf("\nVariable value using pointer: %d\n",*ptr);

    printf("\nAddress of ptr Address: %d",&pptr);
    printf("\n Value what have in ptr: %d",pptr);
    printf("\nVariable value using second pointer: %d",**pptr);




    return 0;
}
