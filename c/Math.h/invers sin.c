/*
sin(x)^1
Syntax:
double asin(double arg);
float asinf(float arg);
long double asinl(long double arg);

*/

#include<stdio.h>
#include<math.h>

int main()
{
    float result=0;
    float arg;
    printf("Enter float x number for tan(x): ");
    scanf("%f",&arg);
   result= asin(arg);
    printf("%f",result);


    return 0;
}
