/*
tan^-1(x)
Syntax:
double atan(double arg);
float atanf(float arg);
long double atanl(long double arg);

*/

#include<stdio.h>
#include<math.h>

int main()
{
    float result=0;
    float arg;
    printf("Enter float x number for tan(x): ");
    scanf("%f",&arg);
   result= atan(arg);
    printf("%f",result);


    return 0;
}
