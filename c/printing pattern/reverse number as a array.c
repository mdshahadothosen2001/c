/*
6 as a input
16 13 7 2 1 12
12 1 2 7 13 16
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int a[50];
    scanf("%d", &n);
    
   for(i=1; i<=n;i++)
   {
       scanf("%d",&a[i]);
   }
   
   for(i=n; i>=1; i--)
   {
       printf("%d ",a[i]);
   }
    return 0;
}
