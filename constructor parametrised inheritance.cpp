#include <iostream>
using namespace std;
class base
{
  int a;
  public:
  base(int x)
  {
  	a=x;
  	cout<<"base class constructor"<<endl;
  	cout<<a<<endl;
  	}
  };
  class derived	{
  	
  	
 class derived1:public base,public derived 
  {
  	int b;
  	public:
  	derived1(int y,int z):base(z)
  	{
  	  b=y;
  	  cout<<"derived constructor"<<endl;
  	  cout<<b;
  	  }
  	  };
int main()
  	  {derived1 d1(3,4);
  	  	
  	  	return 0;
  	  	}
  	
  
