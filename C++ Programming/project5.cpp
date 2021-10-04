#include <iostream>

using namespace std;

int main()
{
	int a;
	cout<<"Enter the number = ";
	cin>>a;
	if (a>999)
	{
		cout<<"Multiple digit number";
    }
	else if (a>99)
    {
    	cout<<"Triple digit number";
	}
	else if (a>9)
	{
	    cout<<"Double digit number";	
	}
	else 
	{
		cout<<"Single digit number";
	}
	return 0;
}
