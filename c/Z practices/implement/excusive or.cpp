//Push

#include<iostream>
using namespace std;

int main()
{
    int n=5,m=7;

    n=n^m;
    cout<<n<<endl;
    m=n ^m;
    n=n^m;
    cout<<n<<m;


    return 0;
}
