
/*
file data transfer to another new file,
like abc.txt to readNew.txt
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
    FILE *fp=NULL;
    FILE *fp1=NULL;

    char ch[50];
    int n=1;

    fp=fopen("abc.txt","r");
    if(fp==NULL)
    {

        printf("There are no file");
        exit(1);

    }

    fp1=fopen("readNew.txt","r");
    if(fp1==NULL)
    {

        printf("No file");
        exit(1);

    }
    printf("Print from file abc.txt\n");
   fgets(ch,30,fp);
   printf("%s",ch);

   printf("\nPrint from readNew.txt file:\n");
   fgets(ch,30,fp1);
   printf("%s",ch);

   printf("\nSuccessfully Read\n");



    fclose(fp);
    fclose(fp1);
}

