/*
cos(x)=adj//hyp;
Syntax:
double cos(double arg);
float cosf(float arg);
long double cosl(long double arg);

*/

#include<stdio.h>
#include<math.h>

int main()
{
    float result=0;
    float arg;
    printf("Enter float x number for tan(x): ");
    scanf("%f",&arg);
   result= cos(arg);
    printf("%f",result);


    return 0;
}
