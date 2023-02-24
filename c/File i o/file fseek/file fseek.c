
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





        fseek(fp,9,SEEK_SET);
        ch=fgetc(fp);
        printf("%c",ch);


    printf("\n\nSuccessfully you have read!\n\n");


    fclose(fp);

}






