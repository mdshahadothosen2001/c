/*

Given three sides of triangle

find measure of angle

like
AC=a
AB=b
BC=c

<BAC=Y [that's gama]
<ABC=a [that's alpha]
<ACB=B [That's Bita]


alpha(a)=acos[(b*b+c*c -a*a)/2bc]
bita(B)=acos[(a*a+c*c -b*b)/2ac]
gama(y)=acos[(a*a+b*b -c*c)/2ab]

then  degree=radian/(pi/180);
here radian = alpha,bita,gama value(using acos)
*/


#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14159

int main()
{
    int a,b,c;
    float bc,ac,ab,arg,arg1,arg2;
    float radian, radian1, radian2;
    float  degree, degree1, degree2,sum;

    a=8;
    b=5;
    c=10;
    bc=(2*b*c);
    ac=2*a*c;
    ab=2*a*b;


    arg=((b*b+c*c-a*a)/bc);
    arg1=(a*a+c*c-b*b)/ac;
    arg2=(a*a+b*b-c*c)/ab;


// Find radian
    radian=acos(arg);
    radian1=acos(arg1);
    radian2=acos(arg2);


//Find Degree
    degree=radian/(PI/180);
    degree1=radian1/(PI/180);
    degree2=radian2/(PI/180);

// Print three angles of triangle
    printf("\n%f",degree);
    printf("\n%f",degree1);
    printf("\n%f",degree2);


    // For Check sum of three angle == 180?
    sum=degree+degree1+degree2;
    //Use .0 for no need value after dot point
    printf("\n%.0f",sum);


    printf("\n\n\t\tYour Task is Done\n\n");
    return 0;
}
