/*#include <iostream>
using namespace std;
class circle
{public:
	double radius;
	double compute_area()
	{
	return 3.14*radius*radius;
	}
	};
int main()
	{circle c;
	c.radius= 2;
	cout<<"Radius is : "<<c.radius<<"\n";
	cout<<"Area is : "<<c.compute_area();
	return 0;
	}*/
	
	
//parametrized function
	
#include <iostream>
using namespace std;
class circle
{private:
	double radius;
public:
	double compute_area(double r)
	{
		radius=r;
	double area = 3.14*radius*radius;
	cout<<"Radius is : "<<radius<<"\n";
	cout<<"Area is : "<<area<<endl;
	}

	};
int main()
	{
		circle c;
	c.compute_area(5.5);
	
	return 0;
}


	
