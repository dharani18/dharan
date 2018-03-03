#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter number:\n";
	cin >> num;
	if (num>=10)
	{
		switch (num)
		{   

		   case 0:
				cout << " ";
				break;
			case 1:
				cout << "one";
				break;
			case 2:
				cout << "two";
				break;
			case 3:
				cout << "three";
				break;
			case 4:
				cout << "four";
				break;
			case 5:
				cout << "five";
				break;
			case 6:
				cout << "six";
				break;
			case 7:
				cout << "seven";
				break;
			case 8:
				cout << "eight";
				break;
			case 9:
				cout << "nine";
				break;
			case 10:
			     cout<<"ten";
			     break;
			default:cout<<"error";
			return 0;
		}
	}
}
