/*
********
 *******
  ******
   *****
    ****
     ***
      **
*/
#include <stdio.h>
int main()
{
    int i,j,n; //rows;
    n=8;
    //printf("Enter number of rows you want: ");
    //scanf("%d",&rows);//Input number of rows from user
    for(i=n; i>=1; i--){//parent for loop for literate rows
            for(j=i; j<n; j++){//print space using this for loop
                printf(" ");
            }
            for(j=i; j>=1; j--)//print star through every rows
            {
                printf("*");
            }
            printf("\n"); //move to next line
    }
   
    return 0;
}
