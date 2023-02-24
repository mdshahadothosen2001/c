/*
Pointer work for only variable's address
Ex.
int x=5;
address of x:1000

int *ptr;
address of pointer : 3000

assign variable address to pointer
prt=&x;
now prt's value is 1000 that is value of x

pointer declare 3 way
int* p;
int * p;
int *p

*/


int main()
{

   //declare variable integer type and assign value
    int age=21;
    //Declare pointer
     int* ptr;
    // assign address to pointer
    ptr=&age;

    //which is assign variable to pointer
    // assign variable address to pointer
    printf("Which is assign int variable to pointer: %d\n",ptr);

    //print value
    printf(" Age from integer variable: %d\n",age);
    printf("Age from pointer: %d", *ptr);

    //Address
    printf("Address of age: %d\n",&age);
    printf("Address of pointer: %d\n",&ptr);



    return 0;
}
