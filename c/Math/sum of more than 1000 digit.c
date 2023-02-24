#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int n,c,i,x=10;
    printf("Enter the Digit number:\n");
    scanf("%d",&n);
    int dig[n],dig1[n],sum[n],fin[n];

 printf("\nEnter value of Number1 for single digit:\n ");
// Taken Num 1 from user
    for(i=0; i<n; i++)
    {
        scanf("%d",&dig[i]);

    }
printf("\nEnter value of Number2 for single digit:\n ");
 //Taken num 2 from user
     for(i=0; i<n; i++)
    {
        scanf("%d",&dig1[i]);

    }
// Sum of two num
 c=0;
    for(i=n-1; i>=0; i--)
    {

        sum[i]=dig[i]+dig1[i]+c;

        if(sum[i]>=10 &&i!=0)
        {
            sum[i]=sum[i]-x;
            c=1;

        }
        else
        {
            c=0;
        }



    }
//print   the sum
printf("Sum of two Numbers:\n");
 for(i=0; i<n; i++)
    {

        printf("%d  ",sum[i]);

    }


 return 0;

}

