#include <iostream>
using namespace std;

int main()
{
int n,average;
cout<<"Enter values"<<endl;
cin>>n;
for(int i=1;i<=n;i++)
{
int average,value;
cin>>value;
value+=value;
average=value/n;
cout<<average<<endl;
}
system("stop");
return 0;
}
