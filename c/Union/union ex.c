#include<stdio.h>
#include<string.h>

union my{
int n;
float f;
double d;
char ch;
char name[50];
};


int main()
{
   union my u;
   u.n=21;
   printf("\nInteger value is: %d",u.n);

   u.f=56.7;
   printf("\nFloat value is: %f",u.f);

   u.d=78676;
   printf("\nDouble value is: %lf",u.d);


   u.ch= 'S';
   printf("\nSingle Char value is: %c",u.ch);


   strcpy(u.name, "Md. Shahadot Hosen");
   printf("\nMy name is: %s",u.name);




  printf("\n\nYour program is Done\n\n");
    return 0;
}
