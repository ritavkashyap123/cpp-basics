#include <iostream>

using namespace std;

int main()
{
	int a;
	cout<<"Enter the age = ";
	cin>>a;
	if(a<=0)
	{
    cout<<"Invalid age"<<endl;
	}
  	else if(a>0 and a<=12)
	{
   	cout<<"You are child"<<endl;
	}
	else if(a>=13 and a<=19)
	{
   	cout<<"You are teen"<<endl;
	}
	else if(a>=20 and a<=39)
	{
   	cout<<"You are young"<<endl;
	}
	else if(a>=40 and a<=59)
	{
   	cout<<"You are middle aged person"<<endl;
	}
	else
	{
   	cout<<"You are smart"<<endl;
	}
	return 0;
}
