#include<stdio.h>
main()
{
int Max, Min, Inpn, x;
printf("Input #1: ");
scanf("%d",&Inpn);
Max = Inpn;
Min = Inpn;
// Call the First number as current maximum and minimum
for(x=2;x<=5;++x)
{
printf("Input #%d: ",x);
scanf("%d",&Inpn);
if(Inpn>Max)
// if the next number is bigger than current maximum, store it
{
Max = Inpn;
}
if(Inpn<Min)
// if the next number is lower than current minimum, store it
{
Min = Inpn;
}
}
printf(" The Maximum # is %d\n",Max);
printf(" The Minimum # is %d\n",Min);
}

