#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int num;
	for(j=1;j<10;j++)
	{
		for(i=1;i<j+1;i++)
		{
			cout<<j<<"*"<<i<<"="<<j*i<<" ";
		}
		cout<<endl;
	}
	return 0;
}
