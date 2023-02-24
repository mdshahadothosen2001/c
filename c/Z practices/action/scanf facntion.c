#include<stdio.h>
int main()
{
    int number;
    printf("Enter a integer number : ");
    scanf("%d",&number);

    if (number <100)
         printf("\nYour %d number is smaller than 100",number);
    else
        printf("Your %d number is contains more than two digits",number);
    return 0;
}
