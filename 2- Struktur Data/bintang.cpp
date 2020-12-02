#include<iostream>
using namespace std;
int main()
	{
	for(int i=1;i<=5;i++)
	{
		for (int j= 5;j>i; j--)
		{
			cout <<" ";
		}
		for(int k = 1; k <= i; k++)
		{
			cout << "0";
		}
	cout<<endl;
	}
	}
