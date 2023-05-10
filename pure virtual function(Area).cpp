#include <iostream>
using namespace std;
class shape
{protected:
float dimention;
 public:
 void getdimention()
 {
 cin>>dimention;
 	}
 virtual float calarea()=0;
 };
 class square:public shape
 {
  public:
  float calarea(){
  	return dimention*dimention;
  	}
  };
  class circle:public shape
  {public:
  	float calarea()
  	{
  	return 3.14*dimention*dimention;
  	}
  	};
  int main()
  {
    square s;
    circle c;
    cout<<"Enter the length of square : ";
    s.getdimention();
    cout<<"Area of square is : "<<s.calarea()<<endl;
    cout<<"\nEnter the radius of circle : ";
    c.getdimention();
    cout<<"Area of circle is : "<<c.calarea()<<endl;
    return 0;
    }
    
  	
