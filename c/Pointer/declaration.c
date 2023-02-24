#include<stdio.h>

int main()
{
    int x=10;
    int y=10;
    int *ptr=&x;
    int *ptr1=&y;
    int temp;


    /*1*/
     printf("%d\n",(*ptr)++);


    /*2*/
     printf("%d %d  sum = %d\n",*ptr,*ptr1,(*ptr)+(*ptr1)--);

     /*3*/
     printf("%d \n",--(*ptr1));

     /*4*/

    printf("%d %d %d",*ptr,*ptr1,++(*ptr1)-(*ptr));

    return 0;
}
