/*Create User Defined Function for Recursion

find n-th fibonic series */

//Recursion using User Defined Function

#include<stdio.h>

int fib(int N);
int main()
{
    int N,result;
    scanf("%d",&N);
    if(N<0)
        printf("Fibonacci of negative number is not possible\n");
    else
    {
        result=fib(N);
        printf("%d\n",result);
    }



    return 0;
}

int fib(int N)
{




   if(N==0)
   {
       return 0;
   }
   else if(N==1)
   {
       return 1;
   }
   else
   {
       return (fib(N-1)+fib(N-2));
   }

}


