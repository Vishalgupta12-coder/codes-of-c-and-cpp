#include <iostream>
using namespace std;
class inc
{private:
   int value;
   public:
   void operator++()
   {cout<<"after incriment : "<<endl;
      value++;
      }
    void display()
      {
        cout<<"Value is : "<<value<<endl;
        }	
     void getdata()
        {
     	cout<<"enter value : ";
     	cin>>value;
     	}
   friend void operator--(inc&);
   friend void operator*(inc&);
};
void operator--(inc &c1)
{cout<<"After decrement : "<<endl;
   c1.value--;	
}
void operator*(inc &c2)
{ cout<<"After multiplication : "<<endl;
int a=c2.value*c2.value;
cout<<"value is : "<<a<<endl;

	}
	
int main()
{   inc c,c1,c2;
	c.getdata();
	c.operator++();
	c.display();
	c1.getdata();
          --c1;
          c1.display();
          
          c2.getdata();
	*c2;
	return 0;
	}
	

