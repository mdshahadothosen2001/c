
#include<stdio.h>

int main()
{

   char love[20]="Say: I Love You";
   char rep[10]=" reply ";
   char loveso[20]="I Love You Too ";
   int n;
   printf("Input the value for output:");
   scanf("%d",&n);

   if(n==1)
   {
     puts(love);
   }
   else if(n==2)
   {
       puts(loveso);
   }
   else
   {
       for(int i=0; i<n; i++)
       {
           printf("%s",love);
       printf("%s",rep);
       printf("%s",loveso);

       }
   }


    return 0;
}
