#include <iostream>
using namespace std;
class student
{public:
	string name;
	int rollno,marks;
	int getdata();
	};
int main()
	{
	student s1;
		s1.name="vishal Gupta";
		s1.rollno=2028230;
		s1.marks=448;
	cout<<"Name of the student : "<<s1.name<<endl<<"Roll no.of student : "<<s1.rollno<<endl<<"Marks of student : "<<s1.marks;
              
		return 0;
		}
