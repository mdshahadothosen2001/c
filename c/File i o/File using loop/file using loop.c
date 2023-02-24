

#include<stdio.h>
#include<string.h>
int main()
{

    FILE *fp;
    int i;
    char ch[]= "Hello! Md. Shahadot Hosen. Welcome" ;
    fp=fopen("my.txt", "w" );

    for(i=0; i<=strlen(ch); i++)
    {
        fputc(ch[i],fp);
    }

    fclose(fp);

}
