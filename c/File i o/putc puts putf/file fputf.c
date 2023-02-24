#include<stdio.h>
#include<string.h>
int main()
{

    FILE *fp;
    int i,a=21;
    char ch[]= "Hello! Md. Shahadot Hosen. Welcome" ;
    fp=fopen("my.txt", "w" );


        fprintf(fp,"%d %s",a,ch);


    fclose(fp);

}
