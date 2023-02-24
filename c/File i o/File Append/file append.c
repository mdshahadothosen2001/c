// append mean add more string to file

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char str[100];

    fp=fopen("add.txt","a");

    if(fp==NULL)
    {
        printf("Error");
        exit(1);
    }


            printf("Enter string what you want to add:");
            gets(str);
           fputs(str,fp);
             printf("Successfully Added");





    fclose(fp);

}



