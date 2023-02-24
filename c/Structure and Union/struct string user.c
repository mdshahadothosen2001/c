

/*
Create a simple structure named Student that holds the following  variables-

i.   id(integer)
ii.  cgpa(float)
iii. name(string)

Now create an instance of that structure named s1 and
scan  the values from the user.
Finally print the id, cgpa and name which user entered.


*/

#include<stdio.h>
#include<conio.h>
#include<string.h>




struct student{
  int id;
  float cgpa;
  char name[30];
};

int main()
{

    struct student s1;

	printf("Enter name: ");
	scanf("%[^\n]",s1.name);

	printf("Name is: %s\n",s1.name);




    return 0;
}
