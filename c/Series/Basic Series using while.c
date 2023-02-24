
#include<stdio.h>
int main()
{
    int nth,a,sum=1;
    scanf("%d",&nth);
    printf("1");
    //for(a=2;a<=nth;a++)
     a=2;
    while(a<nth)
    {
        a++;
        printf("+%d",a);
        sum+=a;

    }
    printf("=%d",sum);


    return 0;
}
