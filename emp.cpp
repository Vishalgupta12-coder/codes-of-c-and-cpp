#include <iostream>
using namespace std;
class emp
{public:
	string name;
	int empcode,sallary;
	int getdata();
	};
int main()
	{
	emp s1;
		s1.name="vishal";
		s1.empcode=1234;
		s1.sallary=448;
	cout<<s1.name<<" "<<s1.empcode<<" "<<s1.sallary;
              
		return 0;
		}
