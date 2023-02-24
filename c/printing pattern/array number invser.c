/*
4
99 88 777 66
66 777 88 99 
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 1; i <= num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */

    for(i = num; i > 0; i--)
        printf("%d ", *(arr + i));
    return 0;
}
