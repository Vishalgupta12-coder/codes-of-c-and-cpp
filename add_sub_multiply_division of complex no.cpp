#include <iostream>
using namespace std;
class complex
{public:
	double real;
	double d1,d2,d3,d4;
	double imag;
	
void setdata()
	{cin>>real;
	 cin>>imag;
	}
void display1()
	{cout<<real<<" "<<imag<<"i"<<endl;
	}
void display2()
	{cout<<real<<" + "<<imag<<"i"<<endl;
		}
void display3()
{cout<<real<<"+"<<imag<<"i"<<endl;
		}
void display4()
{cout<<real<<"+"<<imag<<"i"<<endl;
		}
void sum(complex c1,complex c2)
		{ real= c1.real + c2.real;
		  imag= c1.imag+c2.imag;
		  }
void sub(complex c1,complex c2)
		{ real= c1.real - c2.real;
		  imag= c1.imag - c2.imag;
		  }
void multiply(complex c1,complex c2)
		{ real= c1.real * c2.real - c1.imag*c2.imag;
		  imag= c1.real*c2.imag+c2.real*c1.imag;
		  }
void divide(complex c1,complex c2)
 { d1 = c1.real*c2.real + c1.imag*c2.imag;
  d2 =  c2.real*c2.real + c2.imag*c2.imag;
  real=d1/d2;
  d3 = (c1.imag*c2.real -c1.real*c2.imag);
  d4 = (c2.real*c2.real +c2.imag*c2.imag);
  imag=d3/d4;
		  }
		  
		  };
int main()
		  {complex c1,c2,c3;
		 cout<<"Enter real and imaginary value of function 1 : "<<endl;
	
		  c1.setdata();
 cout<<"Enter real and imaginary value of function 2 : "<<endl;
		  c2.setdata();
cout<<"sum of two complex number is  : "<<endl;
		  c3.sum(c1,c2);
		  c3.display1();
		  	
cout<<"subtraction of two complex numbers is  : "<<endl;
		  c3.sub(c1,c2);
		  c3.display2();
	
cout<<"multiplication of two complex numbers is  : "<<endl;
		  c3.multiply(c1,c2);
		  c3.display3();
		 
cout<<"Division  of two complex numbers is  : "<<endl;
		  c3.divide(c1,c2);
		  c3.display4();	
		  	 return 0;
		  	
		  	}
		  	
