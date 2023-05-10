#include <iostream>
using namespace std;
int main()
{
	int a,s=0;
	cout<< "Enter Toal numbers whose sum you want : ";
	cin>>a;
	for(int i=0;i<=a;i++)
	s= s+i;
	cout<<"sum of first "<<a<<" numbers is : " << s;
	return 0;
	}
