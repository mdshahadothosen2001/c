/*
char str_arr[2][6] ={"gouri", "ram"};
*/

#include<stdio.h>
int main()
{
    char str[4][10]={"Mango","Jack-Fruit", "Banana","Litchi"};
    printf("%s",str[3]);

    // want to all element using  loop [iteration]

    int i;
    for(i=0; i<4;i++)
    {
       printf("%s\n",str[i]);
    }



    return 0;
}
