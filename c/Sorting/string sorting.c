/*
Example:
input: elepHant
output: Elephant

input: cAt:
output: Cat

input: SunDAY
output: Sunday
*/

#include<stdio.h>
#include<string.h>

int main()
{

    char name[30];
    int i,len;
    scanf("%s",name);
    len=strlen(name);

    for(i=0; i<len; i++)
    {

        if(i==0)
        {
               if(islower(name[i]))
                {
                   char ch;
                   ch=toupper(name[i]);
                   printf("%c",ch);
                }
                else
                {
                    printf("%c",name[i]);
                }

        }
         else
        {

            if(isupper(name[i]))
                {
                   char ch;
                   ch=tolower(name[i]);
                   printf("%c",ch);
                }
                else
                {
                    printf("%c",name[i]);
                }

        }
    }



    return 0;
}
