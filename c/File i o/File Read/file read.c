
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char ch;

    fp=fopen("read.txt","r");

    if(fp==NULL)
    {
        printf("Error");
        exit(1);
    }

    while(!feof(fp))
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }



    fclose(fp);

}

