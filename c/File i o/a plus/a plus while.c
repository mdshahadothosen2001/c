/* a+ mean read and append [ ]

*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char ch;

    fp=fopen("reada.txt","a+");

    if(fp==NULL)
    {
        printf("Error");
        exit(1);
    }


rewind(fp);
  while(! feof(fp))
  {

        ch=fgetc(fp);
        printf("%c",ch);
  }

    printf("\n\nSuccessfully you have read!\n\n");


    fclose(fp);

}






