#include <iostream>
using namespace std;
class base
{public:
	void print()
	{
		cout<<"Base class."<<endl;
	}
};
class derived:public base
{
public:
void print()
{ base::print();//call print function of base class
  cout<<"Derived class.\n";
 }
 };
 int main()
 { derived d1;
  d1.print();
  //instead of 14 we call print function of base class is as follows
  d1.base::print();
  return 0;
  }
  
 
 
