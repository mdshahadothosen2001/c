#include<stdio.h>
// input as a character and work
 int main()
 {

     char ch;
     char yes='y', Yes='Y';
     char no='n', No='N';
     printf("Enter a letter of English:  ");
     scanf("%c",&ch);
     printf("\n");
     if(ch==yes || ch==Yes)
     {
         printf("Yes");
     }
     else if(ch==no || ch==No)
     {

         printf("No");
     }
     else
     {
         printf("Invalid & Thank you");
     }


     return 0;
 }
