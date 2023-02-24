/*  
when 5 enter as input
5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5 
*/
#include <stdio.h>

int main() 
{

    int n,i,j,min;
    scanf("%d", &n);
    int ln = n*2 - 1;
    for( i=0;i<ln;i++){
        for( j=0;j<ln;j++){
            min = i < j ? i : j;
            min = min < ln-i ? min : ln-i-1;
            min = min < ln-j-1 ? min : ln-j-1;
            printf("%d ", n-min);
        }
        printf("\n");
    }
    return 0;
}
