
#include<stdio.h>
#include<string.h>
int main()
{

    FILE *fp;
    int i,age=21;
    char hel[]= "Hello!" ;
    char name[]= "Md. Shahadot Hosen" ;
    char wel[]= "Welcome" ;

    fp=fopen("myAbout.txt", "w" );


        fprintf(fp,"%s %s\n%s\nYou are %d",hel,name,wel,age);


    fclose(fp);

}
