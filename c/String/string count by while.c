/*
input:
"Md     Shahadot Hosen"


output:
21


*/
#include <stdio.h>
#include<string.h>
#include<conio.h>

int main()
{ 
    int i=0;
    unsigned int count=0;
    char name[30]="Md     Shahadot Hosen";
  
    while(name[i]!='\0')
    {
        count++;
        i++;
    }
    
    printf("%d",count);
 

    return 0;
}
