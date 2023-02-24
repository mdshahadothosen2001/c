/*


Ex. Input:Output:
amkHH


Upper: HH
Lower: amk

*/


#include<stdio.h>
#include<string.h>



void caseSensitive()
{
    char ch[30];
    ch[30]=" hello";
    //take a word from user
    scanf("\n%s",ch);
    int len,c=0,cc,t,tt;
    len=strlen(ch);
    char temp[len-1], temp1[len-1];
    t=0;
    tt=0;
    cc=0;

    //separate upper case or lower case
    for(int i=0; i<len; i++)
    {
        if(65<=ch[i] && ch[i]<=90 )
        {
            ;
            c++;
            temp[t]=ch[i];
            t++;
        }
        else if(ch[i]>=97 && ch[i]<=122)
        {

            cc++;

            temp1[tt]=ch[i];
            tt++;
        }

    }


printf("\nUpper alphabets are: %s",temp);
printf("\nLower alphabets are: %s",temp1);



}

int main()
{
    caseSensitive();


    return 0;
}

