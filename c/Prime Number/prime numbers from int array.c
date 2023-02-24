#include <stdio.h>

int main()
{
    int i,j,num;
   int arr[9]={1,2,3,23,5,6,7,8};

    for(i=2; i<=8; i++)
    {
        int num=arr[i];
        int c=0;


        for(j=1; j<=num; j++)
        {

            if(num%j==0)
            {
                c++;
            }
        }
       if(c==2)
        {
            printf(" %d",num);
        }

    }

    return 0;
}
