#include<stdio.h>

int main()
{
    int a,b,div,div1,c,k,gcd;
    scanf("%d%d",&a,&b);
    int i,j,divisor[100],divisor1[100];
    c=0;
    k=0;
  // Division for variable a
    for(i=2; i<=a;i++)
    {
        if(a%i==0)
        {
            divisor[c]=i;

            c++;

        }
    }
/*
    for(i=0; i<c; i++)
    {
        printf("%d ",divisor[i]);

    }
*/

//division for variable b
//printf("\n\nFor variable b\n\n");

    for(i=2; i<=b;i++)
    {
        if(b%i==0)
        {
            divisor1[k]=i;

            k++;

        }
    }

   /* for(i=0; i<k; i++)
    {
        printf("%d ",divisor1[i]);

    }
    */
//Check for common
//printf("\n\nCheck common divisor: \n\n");
for(i=0; i<c;i++)
{
    for(j=0;j<k;j++)
    {
     if(divisor[i]==divisor1[j])
     {
         gcd=divisor[i];
     }
    }
}

printf("%d",gcd);
    return 0;
}

