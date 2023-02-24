/*
using structure and function

*/
#include<stdio.h>
#include<string.h>


struct Product{
char name[30];
double price;

};


void printProductInfo(char name[], double price)
{

    printf("\n%s",name);
    printf("\n%.2f",price);



}

int main()
{
    struct Product myProduct={"Formal Black Suit set",30.500};


    printProductInfo(myProduct.name, myProduct.price);

    return 0;
}
