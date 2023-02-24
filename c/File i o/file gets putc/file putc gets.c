
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char name[30];
  int i;
    fp=fopen("myName.txt","w");

    if(fp==NULL)
    {
        printf("Error");
        exit(1);
    }
printf("Enter Your name:");
     gets(name);

    for(i=0; i<strlen(name);i++)
    {

        fputc(name[i],fp);

    }
// or fputs(name,fp);

    fclose(fp);

}
