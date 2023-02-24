
/*


*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char ch;

    fp=fopen("reads.txt","r");

    if(fp==NULL)
    {
        printf("Error");
        exit(1);
    }

  int i=0;

       while(! feof(fp))
       {

        fseek(fp,i,SEEK_SET);
        ch=fgetc(fp);
        printf("%c",ch);
        i++;
       }

    printf("\n\nSuccessfully you have read!\n\n");


    fclose(fp);

}







