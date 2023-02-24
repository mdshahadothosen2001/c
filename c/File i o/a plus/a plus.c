/* a+ mean read and append [ ]

*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char str[100];

    fp=fopen("reada.txt","a+");

    if(fp==NULL)
    {
        printf("Error");
        exit(1);
    }



    fgets(str,30,fp);
    printf("\n%s",str);

    printf("\n\nSuccessfully Added & Recovered!\n\n");


    fclose(fp);

}





