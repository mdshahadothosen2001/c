
#include<stdio.h>

int main()
{
    int year;
    printf("Enter The Year:");
    scanf("%d",&year);

    /* .......2012,2016,2020,2024,2028,2032,......... these are leap year*/
    if(year%400==0)
        {
            printf("\nThis year is Leap Year");
        }
    else if( year%4==0 && year%100!=0 )
    {
         printf("\n else: This year is Leap Year");
    }
        printf("\nThis is not Leap Year. Thank you");

    return 0;
}
