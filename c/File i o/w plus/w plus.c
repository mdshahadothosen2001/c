/* w mean write [create new  file ]
// w+ mean add  write and read from file [that file already created]
//w+ can create new file
w+ loss previous data

r+ and w+ many difference between
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char str[100];

    fp=fopen("read.txt","w+");

    if(fp==NULL)
    {
        printf("Error");
        exit(1);
    }

    fputs("Sinthiya",fp);

    printf("\n\nSuccessfully Added & Recovered!\n\n");


    fclose(fp);

}




