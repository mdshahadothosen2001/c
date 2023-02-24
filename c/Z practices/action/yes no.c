#include<stdio.h>
int main()
{
    char anser;
    printf("Would you like to know my name?\n");
    printf("Type y for Yes and n for No\n\n");
    anser=getchar();
    if(anser=='y' || anser=='Y')

        printf("\n\n My name is Sohan");
    else
        printf("\n\n you are good for nothing");

    printf("\nThank you for your comment");
return 0;
}
