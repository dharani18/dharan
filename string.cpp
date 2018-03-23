#include <iostream>
using namespace std;
int main()

{

    string s;
    int i;
    cout<<"enter the string :";
    cin>>s;
    cout<<"number :";
    for(i=0;i<s.size();i++)
    
    {
    
        if(isdigit(s[i]))
        
        {
        
            cout<<s[i];
            
        }
        
        else
        
        {
            continue;
        }
    }

    return 0;
}
