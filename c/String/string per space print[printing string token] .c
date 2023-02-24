
#include <stdio.h>
#include <string.h>
int main(){
    char s[] = "Let us see some string tokenizing fun";
    char* token = strtok(s, " ");
    while (token) {
        printf("%
s\n", token);
        token = strtok(NULL, " ");
    }
}
