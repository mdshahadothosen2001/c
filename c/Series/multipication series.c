
#include<stdio.h>

//1*3+2*6+3*9+.......
// 1* (3)  +2*( 3*2=6)+ 3*(3*3=9)+
int main()
{
    int firstEnd,mult,  sum=0;
    int first=0, second=3;
    scanf("%d",&firstEnd);

    for(int i=0;i<firstEnd;i++)
    {

        ++first;

        mult=second*first;
        //printf("Mult %d ",mult);
        sum=first*mult;
        //printf("first%d ",first);


    }
    printf("Sum of the series: %d",sum);

    return 0;
}
