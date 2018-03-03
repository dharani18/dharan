 #include <iostream>
using namespace std;
int main ()
{
	int high=0,num,low=0;
	for (int i=0; num!=-1; i++)
	{
		cout<<"Enter the number <-1 to end input> ";
		cin>>num;
		if (num>high)
			high=num;
		if (num<low)
			low=num;
	}
		cout<<"highest number is: "<<high << endl;
		cout<<"lowest number is: "<<low << endl;
	return 0;
}
