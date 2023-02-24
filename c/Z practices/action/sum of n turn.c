#include<stdio.h>
int main()
{
    float sum,n,term;
    int count=1;
    sum=0;
    printf("Enter value of n \n");
    scanf("%f",&n);
    term=1.0/n;
    while(count<=n)
    {
        sum+=term;
    count++;
  printf("\t%d",count);

}
printf("sum=%f\n",sum);
return 0;
}
