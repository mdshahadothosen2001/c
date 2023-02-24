/*
Hello World
555555555
4444444
33333
222
1
*/
#include <stdio.h>

int main()
{
    printf("Hello World\n");
    
    int i,j,n,start,end;
    
    n=5;
    start=1;
    end=2*n;
    
    
    for(i=start; i<end; i++){
        for(j=start; j<end;j++)
        {
            if(i==start || j==start || i==end || j==end)
           {
                printf("%d",n);
           }
        }
        --n;
        ++start;
        --end;
        printf("\n");
    }
    

    return 0;
}
