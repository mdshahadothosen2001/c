#include<stdio.h>


void sumOfNumber(int num1,int num2)
{
    int i,result=1;
    for(i=0; i<num2;i++)
    {

      result=result*num1;
    }

    printf("\n%d",result);
}

int main()
{
    int num1,num2,result;

    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("\nEnter the second number:");
    scanf("%d",&num2);

    sumOfNumber(num1,num2);



    return 0;
}
