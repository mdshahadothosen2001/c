// input: Bangladesh, Output: hsedalgnaB
#include<stdio.h>
#include<string.h>

int main()
{

    char name[30];
    int i, len;

    scanf("%s",name);
    len=strlen(name);
    printf("%d",len);

    for(i=len; i>=0; i--)
    {
        printf(" %c",name[i]);
    }


    return 0;
}
