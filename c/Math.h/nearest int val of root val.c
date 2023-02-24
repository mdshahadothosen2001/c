/*
Find the nearest value of square root value.

*/

#include<stdio.h>
#include<math.h>


int main()
{
    double n,sq;
    int rou;
    scanf("%lf",&n);
    sq=sqrt(n);
    rou= round(sq);
    printf("%d",rou);


return 0;
}
