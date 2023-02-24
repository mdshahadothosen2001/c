/*

struct myStructure s1 = {13, 'B', "Some text"};
struct myStructure s2;

s2 = s1;
*/

#include<stdio.h>

struct myStructure{
 int age;
 char alph;
 char name[30];
};


int main()
{

    struct myStructure s1={21, 'S',"Md. Shahadot Hosen"};

    struct myStructure s2;
    //copy to s2 to s1
    s2=s1;

    printf("%d",s2.age);
    printf("\n%c",s2.alph);
    printf("\n%s",s2.name);

    return 0;
}
