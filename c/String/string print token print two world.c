/*
input:
"Md Shahadot Hosen"


output:
Md
Shahadot


*/
#include <stdio.h>
#include <string.h>
int main(){
    char s[] = "Md Shahadot Hosen";
    char* piece = strtok(s, " ");
    printf("%s\n",piece);
    piece=strtok(NULL, " ");
    printf("%s\n",piece);
 return 0;   
}