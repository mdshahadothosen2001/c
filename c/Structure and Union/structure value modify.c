
#include<stdio.h>
#include<string.h>

struct myStructure{
int age;
char letter;
char name[30];

};

int main()
{
    struct myStructure s1={20, 's', "Md. Shahadot"};

  //Modify values

  s1.age=21;
  s1.letter='S';
  strcpy(s1.name, "Md. Shahadot Hosen");





  printf("%d",s1.age);
  printf("\n%c",s1.letter);
  printf("\n%s",s1.name);
printf("\n\nAnother Example:");
  //another
   struct myStructure s2;
  s2=s1;

  s2.age=16;
  s2.letter='Y';
  strcpy(s2.name,"Sinthiya" );

  printf("\n%d",s2.age);
  printf("\n%c",s2.letter);
  printf("\n%s\n",s2.name);



    return 0;
}
