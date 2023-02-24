/*
You can create a structure by using the struct keyword and
 declare each of its members inside curly braces:

 syntax:

 struct MyStructure {   // Structure declaration
  int myNum;           // Member (int variable)
  char myLetter;       // Member (char variable)
}; // End the structure with a semicolon




Create a struct variable with the name "s1":

struct myStructure {
  int myNum;
  char myLetter;
};

int main() {
  struct myStructure s1;
  return 0;
}
*/

struct myStructure{
    int age;
    char num;


};

int main()
{

   struct myStructure s1;
   struct myStructure s2;
   struct myStructure s3;

   s1.age=21;
   s1.num='B';


   s2.age=18;
   s2.num='S';

   s3.age=18;
   s3.num='S';



   printf("%d",s1.age);
   printf("\n%c",s1.num);

   printf("\n%d",s2.age);
   printf("\n%c",s2.num);

    printf("\n%d",s3.age);
   printf("\n%c",s3.num);

    return 0;
}
