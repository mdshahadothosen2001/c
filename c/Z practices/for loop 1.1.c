#include<stdio.h>
main()
{
int z;
int x, sum=0, inpn;
// initialization
for(x=1; x<=10; ++x)
// Ask user 10 times(i.e. x takes 10 integers)
{
printf("Enter #%d: ",x);
scanf("%d",&inpn);
sum = sum + inpn;
// Accumulate the next value
}
printf("Total Sum of 10 numbers = %d\n",sum);
}

