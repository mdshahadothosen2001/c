#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char ch;

    fp=fopen("error.txt","r");

    if(fp==NULL)
    {
        printf("Error");
        exit(1);
    }
    ch=fgetc(fp);
    printf("%c",ch);

    fputc(ch,fp);

    fclose(fp);

}

