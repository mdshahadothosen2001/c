#include<stdio.h>
#include<string.h>

int main()

{
    char first[]="Darling Tell me";
    char last[]=" your sweet please ";


    strcat(first,last);
    printf("%d",strlen(first));


    return 0;
}
