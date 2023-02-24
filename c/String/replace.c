// replace string of alphabet
// if user enter input: abc then output: xyz

#include<stdio.h>
#include<string.h>

int main()
{
    char s[50];
    int  i,len;
     gets(s);
     len=strlen(s);
    for(i=0; i<=len; i++)
	{
		if(s[i]=='a')
		{
		   s[i]='x';

	    }
	    else if( s[i]=='b')
        {
            s[i]='y';
        }
        else if(s[i]=='c')
        {

            s[i]='z';
        }

	}

    printf("\nafter replace:%s",s);


    return 0;
}
