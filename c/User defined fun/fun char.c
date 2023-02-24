#include<stdio.h>
#include<string.h>

charFun(char arr[]){
printf("\n%s",arr);
}


main()
{
    char arr[20];
    printf("Enter Character String:\n");
    scanf("%s",&arr);

    charFun(arr);

}
