#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main ()
{
    FILE *fp=NULL;
    char ch;
    char str[100];

    fp=fopen("readFseek.txt","r");
     if(fp==NULL)
     {
         printf("\n\tError\n");
         exit(1);
     }

    printf("%d",ftell(fp));


    fscanf(fp,"%s",str);
    printf("%s",str);

    fseek(fp,0,SEEK_END);
    printf("%d",ftell(fp));




    fclose(fp);

}
