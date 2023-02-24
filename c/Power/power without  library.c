#include<stdio.h>

int main()
{
    double base, exp, result=1;
    printf("Input value of base:");
    scanf("%lf",&base);
    printf("\nInput value of exp:");
    scanf("%lf",&exp);

    for(int i=0; i<exp; i++)
    {
        result*=base;

    }
    printf("\n %.2lf",result);


    return 0;
}
