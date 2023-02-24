#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char ch;
    char about;
    int n=1;
    fp=fopen("myAbout.txt","r+");

    if(fp==NULL)
    {
        printf("Error");
        exit(1);
    }


   /*


   write here code for all text print

   */



    }

    printf("\n%d",n);



printf("\n\nSuccessfully Added & Recovered!\n\n");


    fclose(fp);

}
