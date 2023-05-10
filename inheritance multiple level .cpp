#include <iostream>
using namespace std;
class base
{int i,j;
public :
	void set(int a,int b)
	{i=a;
	j=b;
		}
	void show()
	{
	cout<<i<<" "<<j<<endl;
		}
};
class derived:public base
{ int k;
public:
 void setk(int c)
 {k=c;
 	}
 void showk()
 {cout<<k<<endl;
 	}
 };
 class derived1:public derived
 {
  int l=10;
  public:
  void show1()
  {cout<<l;}
 
 };
 int main()
 { derived1 obj;
 	obj.set(1,2);
 	obj.show();
 	obj.setk(3);
 	obj.showk();
 	obj.show1();
 	
 	return 0;
 	}
