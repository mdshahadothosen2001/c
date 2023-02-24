#include<stdio.h>

int main()
{
    int nth,sum=0;

    printf("1+2+3+4+5+6+7........+nth\n");
    scanf("%d",&nth);
    printf("\n1+2+3+4+5+6+7+8+.....+%d",nth);

    for(int i=1; i<=nth; i++)
    {

         printf("\n%d",i);
         sum=sum+i;

    }
    printf("\n%d",sum);

    return 0;
}
