/*
Find the largest prime number of 5 digit
If user gives 500000
largest prime number is:499979
*/

#include<stdio.h>
#include<math.h>

int main()
{
  long int n;
  long int i,j;
  int count;
  scanf("%ld",&n);
  long int k=n-100;
  for(i=n;i>k; i--)
  {
      count=0;
      for(j=1; j<=i; j++)
      {
          if(i%j==0)
          {
              count++;
          }
      }
      if(count==2)
      {
          printf("%ld\n",i);
          k=i;
      }
  }


    return 0;
}
