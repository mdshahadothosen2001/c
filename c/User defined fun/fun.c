#include<stdio.h>


void sumOfNumber(int num1,int num2)
{
    int sum;
    sum=num1+num2;
    printf("\n%d",sum);
}

int main()
{
    int num1,num2;

    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("\nEnter the second number:");
    scanf("%d",&num2);

    sumOfNumber(num1,num2);


    return 0;
}
