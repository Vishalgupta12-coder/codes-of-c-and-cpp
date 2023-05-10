#include<iostream>
using namespace std;
class base
{public:
	virtual void set()=0;
	};
class derived:public base 
	{
	 public:
	 void set()
	 {
	   cout<<"this is pure virtualfunction";
	   }
	   };
	int main()
	   {
	   	base *b;
	   	derived d;
	   	b=&d;
	   b->set();
	   	return 0;
	   	}
