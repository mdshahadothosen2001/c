#include<stdio.h>
int main()
{
    float a,b,c,x,y,z;
    a=10;
    b=5.54;
    c=9.78;

    x=a-b/3+c*2-1;
    y=a-b/(3+c)*(2-1);
    z=a-(b/(3+c)*2)-1;
    printf("%f value of x\n",x);
    printf("%f value of y\n",y);

    printf("%f value of z\n",z);
    return 0;
}
