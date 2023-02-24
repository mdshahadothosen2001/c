/*
round()
Ex.
round(+_0)= +_0
round(+_0.4)= _+0
round(+_0.6)=_+6
*/

#include<stdio.h>
#include<math.h>


int main()
{
    double n, sq;
    int rou;
    scanf("%lf",&n);
    sq=sqrt(n);
    rou=round(sq);
    printf("Round number is %d of  %lf",rou,sq);




return 0;
}
