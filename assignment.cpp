#include<iostream>
using namespace std; 
int x;
int main ( ) 
{
int x = 5;
x= 10; 
{
x =:: x; 
cout<<:: x + x + :: x + x ; 
} 

return 0;
}
