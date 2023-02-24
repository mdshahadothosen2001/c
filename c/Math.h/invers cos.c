
/*
cos(x)^1
Syntax:
double acos(double arg);
float acosf(float arg);
long double acosl(long double arg);

*/

#include<stdio.h>
#include<math.h>

int main()
{
    float result=0;
    float arg;
    printf("Enter float x number for tan(x): ");
    scanf("%f",&arg);
   result= acos(arg);
    printf("%f",result);


    return 0;
}
