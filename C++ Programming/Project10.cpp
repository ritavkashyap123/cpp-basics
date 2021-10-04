#include <iostream>

using namespace std;

int main()
{
	int a=1;
	while (a<10)
	{
		a++;
		if (a==5)
		continue;
		cout<<a<<endl;
	}
	return 0;
}
