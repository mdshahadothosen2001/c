/*
Using rewind();
*/


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char ch;
    int n=1;
    fp=fopen("myLine.txt","r+");

    if(fp==NULL)
    {
        printf("Error");
        exit(1);
    }

    /*if we use for- syntax is:
    for(ch=getc(fp); ch!=EOF; ch=getc(fp))
    */
    while((ch=getc(fp))!=EOF)
    {
      if(ch== '\n' )
      {
          n++;
      }

    }

    printf("\n%d",n);

    printf("\n\nSuccessfully Added & Recovered!\n\n");


    fclose(fp);

}


