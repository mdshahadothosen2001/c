#include<stdio.h>
int main()
{
    int x,y;
    x=100;
    y=200;
    int *pX=&x;
   int *pY=&y;

   printf(" pX :%d",*pX);
   printf("\n pY %d",*pY);



    return 0;
}
