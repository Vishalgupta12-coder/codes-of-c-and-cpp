#include <iostream>
using namespace std;
class student
{public:
          string  name;
	int rollno,marks;
void getdata()
	{cout<<"                Welcome To My Program"<<endl;
	cout<<"______________________________________________________"<<endl;
	cout<<endl;
	cout<<"Enter your name : ";
	cin>>name;
          cout<<"Enter your roll no. : ";
	cin>>rollno;
	cout<<"Enter your Marks : ";
	cin>>marks;
	}
void putdata()
	{
	cout<<"______________________________________________________"<<endl;
	cout<<endl;
	cout<<"Your name is : "<<name<<endl<<"Your Roll no.is : "<<rollno<<endl<<"Your Marks are : "<<marks<<endl;
	cout<<"______________________________________________________"<<endl;
	cout<<endl;
	cout<<"              ThankYou! Have a Nice Day";
              }
           };
          
int main()
           { student s1;
            s1.getdata();
            s1.putdata();
           return 0;
           	}
