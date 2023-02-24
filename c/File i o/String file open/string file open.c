
#include<stdio.h>

int main()
{

    FILE *fp;

    char ch[]= "Hello! Md. Shahadot Hosen. Welcome" ;
    fp=fopen("my.txt", "w" );
    fputs(ch,fp);

    fclose(fp);

}
