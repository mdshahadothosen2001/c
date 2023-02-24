
#include<stdio.h>
int main()
{
    int a, b,c,d;
    printf("Enter inter value of a and b \n ");
    scanf("%d %d",&a,&b);

    c=++a-b;
    printf("a=%d b=%d c=%d\n",a,b,c);
    d=b++ +a;
    printf("a=%a b=%d d=%d",a,b,d);
    printf("a/b=%d\n",a/b);
    printf("a%%b=%d\n",a%b);
    printf("a*=b =%d\n",a*=b);
    printf("%d\n",(c>d)? 1:0);
    printf("%d\n",(c<d)? 1:0);
    return 0;

}
