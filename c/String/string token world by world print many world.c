/*
input:
"Md Shahadot Hosen"


output:
Md
Shahadot
Hosen
*/
#include <stdio.h>
#include <string.h>
int main(){
    char s[] = "Md Shahadot Hosen";
    char* piece = strtok(s, " ");
    
    while(piece!=NULL)
    {
         printf("%s\n",piece);
          piece=strtok(NULL, " ");
    }
   
   
 return 0;   
}