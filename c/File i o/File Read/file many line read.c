

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char name[100];

    fp=fopen("read.txt","r");

    if(fp==NULL)
    {
        printf("Error");
        exit(1);
    }


        while(! feof(fp))
        {
            fgets(name,30,fp);
             printf("%s",name);
        }




    fclose(fp);

}


