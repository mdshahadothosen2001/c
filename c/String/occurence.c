#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000],c[30];
    int i,j,count=0;

    printf("Enter  the string : ");
    gets(s);
    gets(c);
    printf("Enter character to be searched: ");


    for(i=0;s[i];i++)
    {
    	for(j=0; c[j];j++)
        {

            if(s[i]==c[j])
    	   {
              count++;
		   }

        }
 	}

	printf("character occurs %d times \n ",count);



    return 0;
}
