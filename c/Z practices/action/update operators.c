#include<stdio.h>
int main()
{
    float a,b,c,x,y,z;
   printf("Input value of a ,b and c\n\n");
   scanf("%f %f %f",&a,&b,&c);

    x=a-b/3+c*2-1;
    y=a-b/(3+c)*(2-1);
    z=a-(b/(3+c)*2)-1;
    printf("%f value of x\n",x);
    printf("%f value of y\n",y);

    printf("%f value of z\n",z);
    return 0;
}

