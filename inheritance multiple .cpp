#include <iostream>
using namespace std;
class base1
{protected :
	int a;
public :
	void showa()
	{cout<<a<<endl;
		}
		};
class base2
{protected :
	int b;
public :
	void showb()
	{cout<<b<<endl;
		}
		};
class derived: public base1,public base2
{public:
	void set(int i,int j)
	{a=i;
	b=j;
	}
};
		

 int main()
 { derived obj;
 	obj.set(10,20);
 	obj.showa();
 	obj.showb();
 	return 0;
 	}
