/*
This code use for

why rewind() needed and next file rewind
*/


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char ch;


    fp=fopen("readRewind.txt","r+");

    if(fp==NULL)
    {
        printf("Error");
        exit(1);
    }

   fseek(fp,9,SEEK_SET);
    while(! feof(fp))
    {
         ch=fgetc(fp);
         printf("%c",ch);

    }


/* if we don't use "rewind(fp);" then second while don't work
*/
    while(! feof(fp))
    {
         ch=fgetc(fp);
         printf("%c",ch);

    }

    printf("\n\nSuccessfully Added & Recovered!\n\n");


    fclose(fp);

}
