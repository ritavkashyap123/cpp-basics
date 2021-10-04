#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	cin>>N;
	int Ar[N];
	for (int i=0;i<N;i++)
	{
		cin>>Ar[i];
	}
	for (int i=(N-1);i>=0;i--)
	{
		cout<<Ar[i];
	}
	return 0;
}

