#include<iostream>
using namespace std;
int main()
{
int i;
char a[30];
cout<<“Enter a string:”;
gets(a);
for(i=0;a[i]!=’’;++i)
{
if(i==0)
{
if(islower(a[i]))
a[i]=toupper(a[i]);
}
else
{
if(a[i]!=’ ‘)
{
if(isupper(a[i]))
a[i]=tolower(a[i]);
}
else
{
i++;
if(islower(a[i]))
a[i]=toupper(a[i]);
}
}
}
cout<<“New string : “<<a;
return 0;
}
