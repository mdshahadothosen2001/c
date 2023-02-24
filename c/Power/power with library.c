
#include<stdio.h>
int main()
{
    double base,exp,result;
    printf("Enter value of base and exp:\n");
    scanf("%lf %lf",&base,&exp);
    result=pow(base,exp);
    printf("\n%.2lf is the output for power calculated",result);

    return 0;
}
