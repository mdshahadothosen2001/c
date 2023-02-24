/*
1)Read the entered string and initialize to s using gets(s).
2) We are finding the words count based on white spaces present in the given string. The ASCII value of white space is 32.

3) for loop iterates through the string with the structure for(i=0;s[i];i++),

If  ASCII value of any character of a string is equal to ASCII value of white space i.e 32, then increase the word count.

4) After all iterations of for loop increase the word count, if i>0.

5) Print the number of words present in the string.

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i,words=1;

    printf("Enter  the string : ");
    gets(s);

    for(i=0;s[i];i++)
    {
    	if(s[i]==32)
    	 words++;


 	}

           printf("Number of words in string = %d\n",words);


    return 0;
}
