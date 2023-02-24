
#include<stdio.h>

struct myStructure{
 int age;
 char alph;
 char name[30];
};


int main()
{

    struct myStructure s1={21, 'S',"Md. Shahadot Hosen"};

    printf("%d",s1.age);
    printf("\n%c",s1.alph);
    printf("\n%s",s1.name);

    return 0;
}
