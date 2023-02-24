/*
Normally syntax:
variable name . member of structure
like
student.name, student.id, student.marks ......

Pointer
syntax:
pointer -> member of structure

 printf("\n%s",myBall->color);
 printf("\n%.2f",myBall->weight);


*/


#include<stdio.h>
#include<string.h>

struct TanisBall{
char color[30];
float weight;

};


int main()
{


    struct TanisBall myVal;



    printf("Enter color:");
    scanf("%s",myVal.color);

    printf("\nEnter Weight:");
    scanf("%f",&myVal.weight);

    struct TanisBall *myBall;
    myBall=&myVal;


    printf("\n%s",myBall->color);
    printf("\n%.2f",myBall->weight);


    return 0;
}

