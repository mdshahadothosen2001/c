/*
sin(x)=opp//hyp;
Syntax:
double sin(double arg);
float sinf(float arg);
long double sinl(long double arg);

*/

#include<stdio.h>
#include<math.h>

int main()
{
    float result=0;
    float arg;
    printf("Enter float x number for tan(x): ");
    scanf("%f",&arg);
   result= sin(arg);
    printf("%f",result);


    return 0;
}
