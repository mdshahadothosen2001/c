
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

/* which is previous print + 1 index,,then decrease index number.
like
fseek(fp,9,SEEK_SET); print 9 index number but print+1 count index,
fseek(fp,-3,SEEK_CUR); index 10 -3= 7 where have that is print
  */

        fseek(fp,-3,SEEK_CUR);
        ch=fgetc(fp);
        printf("%c",ch);



    printf("\n\nSuccessfully you have read!\n\n");


    fclose(fp);

}








