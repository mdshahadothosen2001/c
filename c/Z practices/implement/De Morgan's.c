#include<stdio.h>

int main()
{
    int c,n;
    float x,y;
    scanf("%f%d",&x,&n);

    y=1.0;
    c=1;

    while(c<=n)
    {
        y=y*x;
        c++;
    }

    print("%f %f",x,y);

    return 0;
}
