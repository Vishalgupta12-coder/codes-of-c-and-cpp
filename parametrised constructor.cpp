#include <iostream>
using namespace std;
class add
{
	int a,b;
	public:
	add(int x,int y)
	{
		a=x;
		b=y;
		}
	void printdata()
		{
			cout<<"sum of a and b is : "<<a+b;
			}
			};
int main()
	{
		add a1(4,5);
		a1.printdata();
		return 0;
	}		
