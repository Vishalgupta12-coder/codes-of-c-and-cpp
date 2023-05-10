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
 {cout<<k;
 	}
 };
 int main()
 { derived obj;
 	obj.set(1,2);
 	obj.show();
 	obj.setk(3);
 	obj.showk();
 	return 0;
 	}
