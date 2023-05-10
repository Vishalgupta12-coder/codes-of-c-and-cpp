#include <iostream>
using namespace std;
class square
{public:
	double side;
	double getarea(void);
	double getparameter(void);
	void setside(double s);
	};
double square::getarea(void)
	{return side*side;
		}
double square::getparameter(void)
		{return 4*side;}
		
void square::setside(double s)
		{side=s;}
int main()
	
	{square s1;
	double area=0.0;
	double parameter=0.0;
	s1.setside(5.0);
	area=s1.getarea();
	parameter=s1.getparameter();
	cout<<"Area of square is : "<<area;
	
	cout<<"\nParameter of square is : "<<parameter;
	return 0;
	}
