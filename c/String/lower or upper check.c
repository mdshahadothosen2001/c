#include<stdio.h>
#include<string.h>

int main()
{
    char name;
    name='a';
    if(islower(name))
    {
        printf("This character is Lower");
    }
    if(isupper(name))
    {
        printf("This is upper case");
    }

    return 0;
}
