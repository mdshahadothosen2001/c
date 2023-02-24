

#include<stdio.h>
#include<string.h>

struct myStructure{
    char brand[30];
    char model[30];
    int year;



};

int main()
{
    struct myStructure s1={"BMW","X5",1999};
    struct myStructure s2={"Ford","Mustang",1969};
    struct myStructure s3={"Toyota", "Corolla",2011};




printf("BMW Car Details:\n");
  printf("Brand:    %s",s1.brand);
printf("\nModel:    %s",s1.model);
printf("\nYear:     %d",s1.year);

printf("\n\nFord Car Details:\n");
  printf("Brand:    %s",s2.brand);
printf("\nModel:    %s",s2.model);
printf("\nYear:     %d",s2.year);

printf("\n\nToyota Car Details:\n");
  printf("Brand:    %s",s3.brand);
printf("\nModel:    %s",s3.model);
printf("\nYear:     %d",s3.year);




    return 0;
}
