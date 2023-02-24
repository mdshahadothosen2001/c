
/*

Union is similar to structure
just difference between about memory
structure taken memory bit  separately for all members.
but union taken 4 bit memory for all members, however member what type data.


like struct{
int n;   \\ taken 4 bit for int data type.

char ch; \\ taken b=memory bit for character data type.

char str[]\\ taken memory bit for string data type.


};


but
union{
int n;
char ch;
char str[];
};

4 bit memory taken for all members of union[int, char ch, char string];


union lost previous data;
like :
when work int member of union;
remember int data value
but when next step like char ch work
then previous all data memory is lost, just remember
present char ch data inf.


because union 4 bit memory taken for all members of union.

*/
#include<stdio.h>
#include<string.h>

union myUnion{
    int age;
    float cgpa;
    char ch;


};

int main()
{


   union myUnion u1;
   printf("Memory size for myUnion: %d\n",sizeof(u1));

   union myUnion u2;
   union myUnion u3;

   u1.cgpa=34.67;
   u1.ch= 'S';
   u2.cgpa= 18.45;
   u2.ch= 'R';

   u3.cgpa= 16.48;
   u3.ch= 'G';



   printf("%.2f",u1.cgpa);
   printf("\n%.2f",u2.cgpa);
   printf("\n%.2f",u3.cgpa);

   printf("\n%c",u1.ch);
   printf("\n%c",u2.ch);
   printf("\n%c",u3.ch);

    return 0;
}
