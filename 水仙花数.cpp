#include <iostream>
using namespace std;
int main()
{
	int a=0,b=0,c=0; //a表示百位数，b表示十位数，c表示个位数
	int num=0;
	do
	{
		num=a^3+b^3+c^3;
		cout<<num<<endl; 
	} while(!num==a*100+b*10+c*1); 
	return 0;
} 
