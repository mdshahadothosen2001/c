/*
ডিভিজর কাউন্ট

যেমন ধরো, 18 এর ডিভিজরগুলো হচ্ছে 1,2,3,6,9,18।
√18 এর চেয়ে ছোট ডিভিজরগুলো হচ্ছে 1,2,3 যেগুলোর প্রত্যেকটার জন্য আমরা আরেকটা ডিভিজর পাচ্ছি যেটা
√18 এর চে' বড় - (1×18)=18,(2×9)=18,(3×6)=18।
 আবার দেখো,
16 এর ডিভিজরগুলো হচ্ছে 1,2,4,8,16। যেটা দাঁড়াচ্ছে (1×16)=16,(2×8)=16,(4×4)=16।
*/

/*
Write a function that takes an integer as input
and prints all of its divisors.
Call this function from the main function.


*/

/*

divisors
like divisors of 18: 13,6,..18.
*/

#include<stdio.h>

int divisors(int x)
{
    int i,j;
    for(i=1; i<=x; i++)
    {
        for(j=1; j<=x; j++)
        {
            if(i*j==x)
            {
                printf("%d ",i);
            }
        }


    }

}

int main()
{
    divisors(18);

    return 0;
}
