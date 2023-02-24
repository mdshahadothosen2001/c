#include<stdio.h>

int main()
{

    FILE *fp;

    char ch='S';
    fp=fopen("abc.txt", "w" );
    fputc('S',fp);

    fclose(fp);

}
