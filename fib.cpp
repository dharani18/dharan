#include <iostream>
using namespace std;

int main()
{
    int n, a1= 0, a2 = 1, nxtm = 0;

    cout << "Enter number: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i)
    {
        if(i == 1)
        {
            cout << " " << a1;
            continue;
        }
        if(i == 2)
        {
            cout << a2 << " ";
            continue;
        }
        nxtm = a1+a2;
        a1 = a2;
        a2 = nxtm;
        
        cout << nxtm << " ";
    }
    return 0;
}

