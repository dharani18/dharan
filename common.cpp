#include <iostream>
using namespace std;
 string LCPUtil(string string1, string string2)
{
    string output;
    int length1 = string1.length(), length2 = string2.length();
     for (int i=0, j=0; (i<=length1-1) && (j<=length2-1); i++,j++)
    {
        if (string1[i] != string2[j])
        {
            break;
        }
        output.push_back(string1[i]); }
    return (output);
}
 string  LCP(string arr[], int n)
{
    string output_prefix =  arr[0];
    for (int i=1; i<=n-1; i++)
    {
        output_prefix = LCPUtil(output_prefix, arr[i]);
    }
    return (output_prefix);
}
int main()
{
    string string_array[] = {"gana", "gama", "gap","game"};
    int length = sizeof(string_array)/sizeof(string_array[0]);
    string ans = LCP(string_array, length);
    if(ans.length())
    {
        cout<<"Longest common prefix is: "<<ans;
    }
    else
    {
        cout<<"No";
    }
    return 0;
}
