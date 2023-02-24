//    *
//   **
//  ***
// ****
//*****
#include <stdio.h>
int main()
{
    int i,j,rows;
    printf("Enter number of rows you want: ");
    scanf("%d",&rows);//Input number of rows from user
    for(i=1; i<=rows; i++){//parent for loop for literate rows
            for(j=i; j<rows; j++){//print space using this for loop
                printf(" ");
            }
            for(j=1; j<=i; j++)//print star through every rows
            {
                printf("*");
            }
            printf("\n"); //move to next line
    }
   
    return 0;
}
