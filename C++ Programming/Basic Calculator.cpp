#include <iostream>

using namespace std;

int main()
{
	int a, b, add, sub, mul, div, rem;
	cout<<"Enter 1st number : ";
	cin>>a;
	cout<<"Enter 2nd number : ";
	cin>>b;
	{
		add=a+b;
		sub=a-b;
		mul=a*b;
		div=a/b;
		rem=a%b;
		cout<<"Their addition is "<<add<<endl;
		cout<<"Their subtraction is "<<sub<<endl;
		cout<<"Their multiplication is "<<mul<<endl;
		cout<<"Their divison is "<<div;
		cout<<", reminder is "<<rem;
	}
	return 0;
}
