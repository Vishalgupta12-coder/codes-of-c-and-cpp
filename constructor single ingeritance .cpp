#include <iostream>
using namespace std;
class base
{ public:
base()
{ cout<<"Constructor"<<endl;
	}
~base()
{cout<<"destructor"<<endl;
}
  };
class derived:public base
{public:
 derived()
{cout<<"derived constructor "<<endl;}
 ~derived()
{cout<<"derived destructor"<<endl;
}};
 int main()
	{
	derived d;
	return 0;
		}
