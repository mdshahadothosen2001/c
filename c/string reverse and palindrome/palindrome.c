/// Orginal: ama,aba,maam, amk
// reverse: ama, aba, maam, kma
// there are only one not palindrome that is amk[ rever kma not equal]

#include<stdio.h>
#include<stdio.h>

int main()
{

    char name[50];

    int i=0;
    scanf("%s",name);
    int j=strlen(name)-1;




    while(j>i)
    {


        if(name[i++]!=name[j--])
        {
            printf("NO, It is not palindrome");
            return;
        }


    }



        printf("YES, It is palindrome");





    return 0;
}
