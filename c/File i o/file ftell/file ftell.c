#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char ch;
    char about;

    fp=fopen("readTell.txt","r+");

    if(fp==NULL)
    {
        printf("Error");
        exit(1);
    }
/* first time when no count that's time tell is 0 */

    printf("\n%d\n",ftell(fp));

/* 2nd time when 1 character count that's time tell is 1 */
    ch=fgetc(fp);
    printf("%c",ch);

    printf("\n%d\n",ftell(fp));


/* 3rd time when also 1 character count that's time tell is 2 */
    ch=fgetc(fp);
    printf("%c",ch);

    printf("\n%d\n",ftell(fp));

/* 4th time when again 1 character count that's time tell is 3 */

    ch=fgetc(fp);
    printf("%c",ch);

    printf("\n%d\n",ftell(fp));
/* 5th time when again 1 character count that's time tell is 4 */

    ch=fgetc(fp);
    printf("%c",ch);

    printf("\n%d\n",ftell(fp));


/* 6th time when again 1 character count that's time tell is 5 */
    ch=fgetc(fp);
    printf("%c",ch);

    printf("\n%d\n",ftell(fp));



    fclose(fp);

}
