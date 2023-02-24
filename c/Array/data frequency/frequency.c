#include <stdio.h>
int main()
{
    long long num, n;
    int i, lastDigit;
    int freq[10];

    scanf("%lld", &num);

    for(i=0; i<10; i++)
    {
        freq[i] = 0;
    }


    n = num;


    while(n != 0)
    {
        lastDigit = n % 10;
        n /= 10;
        freq[lastDigit]++;
    }
    for(i=0; i<10; i++)
    {
        printf("%d",freq[i]);
    }

    return 0;
}
