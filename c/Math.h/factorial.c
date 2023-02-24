/*

5!=5*4!
  =5*4*3!
  =5*4*3*2!
  =5*4*3*2*1!
  =5*4*3*2*1
  =multiply all

*/

#include<stdio.h>

int main()
{
    int n;
    int i;
    unsigned long long int  sum=1;
    n=20;
// n value is 20 maximum

    for(i=1; i<=n; i++)
    {
        sum*=i;

    }


    printf("%llu",sum);


    return 0;
}
