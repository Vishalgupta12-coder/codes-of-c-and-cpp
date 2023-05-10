#include <iostream>
using namespace std;
class Time
{
	int hrs,min;
	public:
	Time(int t)
	{cout<<"After conversion from basic type to class type "<<endl;
		hrs=t/60;
		min= t%60;
		}
	void show()
		{cout<<"TIME = "<<hrs<<" hours : "<<min<<" minutes"<<endl;
			}
			};
int main()
      {
      	int duration;
      	cout<<"enter time duration in minutes : ";
      	cin>>duration;
      	cout<<"Before conversion TIME = : "<<duration<<" minutes"<<endl;
      	Time t1=duration;
      	t1.show();
      	//Time t2(duration);
      	//t2.show();
      	return 0;
      	}
