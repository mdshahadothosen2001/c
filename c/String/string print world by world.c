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
    char* token = strtok(s, " ");
    while (token) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }
 return 0;   
}