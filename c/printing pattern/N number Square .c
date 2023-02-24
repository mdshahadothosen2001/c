#include<stdio.h>

int main()
{
    int n,i,j,k,min;
    scanf("%d",&n);
    k=n*2-1;
    for(i=0; i<k; i++)
    {
        min=0;
        for(j=0; j<k; j++)
        {
            min = i < j ? i : j;
            min = min < k-i ? min : k-i-1;
            min = min < k-j-1 ? min : k-j-1;
            printf("%d ", n-min);


        }

      printf("\n");
    }


    return 0;
}
