#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{

    FILE *fp=NULL;
    char string[30];

    fp=fopen("readTell.txt","r");

    if(fp==NULL)
    {
        printf("\n\tError\n");
        exit(1);
    }

    printf("%d",ftell(fp));
    fscanf(fp,"%s",string );
    printf("%s",string);

    printf("%d",ftell(fp));

    fclose(fp);

}
