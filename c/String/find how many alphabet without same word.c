#include <stdio.h>
#include <string.h>

int main()
{
    // declare a string
    char ch[30];
    // input a string from user
    gets(ch);
    //Ex. input: abcaa
// declare for "For loop"
    int i,j,count;

    //stop when got a null character [\n]
    for( i=0; ch[i]!='\0'; i++)
    {
            count=1;
            for( j=i+1;ch[j]!='\0';j++)
            {
              if(ch[i]==ch[j] || toupper(ch[i])==ch[j] ||tolower(ch[i])==ch[j])
              {
//alphabets counting
                   count++;
                   ch[j]= 32;
// remove the character what the match

              }

            }
// if(no white space then print )
            if(ch[i]!=32)
            {
                 printf(" %c ( %d)\n",ch[i],count);

            }


    }


    return 0;
}
