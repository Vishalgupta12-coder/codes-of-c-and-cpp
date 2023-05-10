#include <iostream>
using namespace std;
class temp
{public:
  void celsius()
  {float f,c1;
  	cout<<"enter temp in fahrenheit : ";
	cin>>f;
	c1=(f-32)*5/9;
	cout<<"Temp in celsius : "<<c1<<endl;}
  void fahrenheit()
	{float c2,f;
	cout<<"enter temp in celsius : ";
	cin>>c2;
	f=(9*c2/5)+32;
	cout<<"Temp in fahrenheit : "<<f<<endl;}
	};
int main()
{temp t1;
t1.celsius();
t1.fahrenheit();
return 0;
  }
	
