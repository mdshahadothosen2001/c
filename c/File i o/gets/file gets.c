#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char name[40];
    int i;
    fp=fopen("userName.txt","w");

    if(fp==NULL)
    {
        printf("Error");
        exit(1);
    }


    printf("Enter the User name:");
    gets(name);


    fputs(name,fp);

    fclose(fp);

}

