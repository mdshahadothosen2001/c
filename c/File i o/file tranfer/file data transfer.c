/*
file data transfer to another new file,
like abc.txt to readNew.txt
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
    // FILE *fp=NULL, *fp1=NULL;
    FILE *fp=NULL;
    FILE *fp1=NULL;

    char ch;
    int n=1;

    fp=fopen("abc.txt","r");
    if(fp==NULL)
    {

        printf("There are no file");
        exit(1);

    }

    fp1=fopen("readNew.txt","w");
    if(fp1==NULL)
    {

        printf("No file");
        exit(1);
    }

    while( (ch=fgetc(fp))!=EOF)
    {

        fputc(ch,fp1);

    }





    fclose(fp);
    fclose(fp1);

    printf("Successfully transfered data");
}
