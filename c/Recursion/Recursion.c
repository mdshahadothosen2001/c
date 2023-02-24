//Recursion using User Defined Function

#include<stdio.h>

void fib();
int main()
{
    fib();


    return 0;
}

void fib()
{
    static int count=5;

   printf("\n %d \n",count--);

   if(count!=0)
   {
       fib();
   }

}

