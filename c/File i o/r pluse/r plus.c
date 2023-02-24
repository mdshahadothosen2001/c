/* r mean read[print info from already created file]
// r+ mean add read and write from file [that file already created]
//r+ can not create new file
r+ loss previous data
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    //char str[100];

    fp=fopen("read.txt","r+");

    if(fp==NULL)
    {
        printf("Error");
        exit(1);
    }

    fputs("Sinthiya",fp);
    fputs( "I Like You" ,fp);
    printf("\n\nSuccessfully Added & Recovered!\n\n");


    fclose(fp);

}



