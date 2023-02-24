#include<stdio.h>

int main()
{
   int num[5]={1,2,3,4,5};
   int num1[5];
   int n=5;
   //output for number
   printf("Output for Number\n");

   for(int i=0; i<n; i++)
   {
       printf("%d ",num[i]);
   }

   //Input for num1
printf("\nInput for Number 1:  \n");
   for(int i=0; i<n; i++)
   {
      scanf("%d", &num1[i]);
   }
// Output for num1
printf("Output Number 1:  ");
   for(int i=0; i<n; i++)
   {
     printf("%d ", num1[i]);
   }

    return 0;
}
