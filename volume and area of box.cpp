#include <iostream>
using namespace std;
class box
{public: 
	double length,breadth,height; 
   double getvolume(void);
   double getarea(void);
   void setlength(double l);
   void setbreadth(double b);
   void setheight(double h);
   };
   double box::getvolume(void)
   {return length*breadth*height;}
   double box::getarea(void)
   {return 2*(length*breadth+breadth*height+height*length);}
   
   void box::setlength(double l)
   {length=l;}
    void box::setbreadth(double b)
   {breadth=b;}
    void box::setheight(double h)
   {height=h;}
	  
int main() 
	  { box b;
	  double volume,area;
	  b.setlength(5.2);
	  b.setbreadth(6.7);
	  b.setheight(7.3);
	  
	volume=b.getvolume();
	  cout<<"Volume of box is : "<<volume;
	 area=b.getarea();
	  cout<<"\nArea of box is : "<<area;
	 
	  return 0;
	  }
