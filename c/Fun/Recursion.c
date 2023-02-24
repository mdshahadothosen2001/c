/*

Recursion is the technique of making a function call itself.

*/

int mySum(int x);

#include<stdio.h>
//declare fun



// main fun

int main()
{
    int result;
    result=mySum(3);
    printf("Summation is: %d",result);

    printf("\n Summation is: %d",mySum(-10));

    return 0;
}

// Define fun

int mySum(int x)
{
    if(x>0)
    {
        return x+10;
    }
    else
    {
        return 0;
    }
}
