#include <iostream>
using namespace std;
int main()
{
    int num=32;
    bool is pow_2=ispowerof2(num);
    if(is pow_2)
    cout<<"\n<<num<<"is power of 2";
    else
    cout<<"\n<<num<<"is not a power of 2";
    cout<<endl;
    return 0;
}
