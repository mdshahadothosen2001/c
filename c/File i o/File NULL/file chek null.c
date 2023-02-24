#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char name[30]="Md. Shahadot Hosen";

    fp=fopen("name.txt","w");

    if(fp==NULL)
    {
        printf("Error");
        exit(1);
    }

    fputs(name,fp);

    fclose(fp);

}
