/*
tan(x)=opp//adj;
Syntax:
double tan(double arg);
float tanf(float arg);
long double tanl(long double arg);

*/

#include<stdio.h>
#include<math.h>

int main()
{
    float result=0;
    float arg;
    printf("Enter float x number for tan(x): ");
    scanf("%f",&arg);
   result= tan(arg);
    printf("%f",result);


    return 0;
}
