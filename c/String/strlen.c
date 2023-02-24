/*
input:
"Md Shahadot Hosen"


output:
17


*/
#include <stdio.h>
#include<string.h>
#include<conio.h>

int main()
{ 
    int count=0;
    char name[30]="Md Shahadot Hosen";
  
    count=strlen(name);
    
    printf("%d",count);
 

    return 0;
}