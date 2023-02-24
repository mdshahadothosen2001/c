
#include<stdio.h>

struct myStructure{
 int age;
 char name[30];
};


int main()
{

    struct myStructure s1;

    s1.age=21;

    // string assign to structure
    strcpy(s1.name, "Md. Shahadot Hosen");

    printf("%d",s1.age);
    printf("\n%s",s1.name);

    return 0;
}
