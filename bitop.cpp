#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    a=6;
    b=7;
    c=a^b;
    b=b^c;
    a=c^b;
    cout<<"a="<<a<<" b="<<b;
    return 0;
}
