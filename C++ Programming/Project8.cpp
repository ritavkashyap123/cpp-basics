#import <iostream>

using namespace std;

int main()
{
	int p, r, t, I, A;
	cout<<"Enter the principal = ";
	cin>>p;
	cout<<"Enter the rate  of interest = ";
	cin>>r;
	cout<<"Enter the time period = ";
	cin>>t;
	{
		I=p*r*t/100;
		A=p+I;
		cout<<"Interest : "<< I<<endl;
		cout<<"Total amount : "<< A;
	}
	return 0;
}
