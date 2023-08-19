#include <iostream>
using namespace std;

class Student
{
private:
long int Account_no;

public:
char stu_name[20];
int Roll_no;
//Getter function
int get_no(){
    return Account_no;
    }
//Parametrised Constructor
Student(long int Account_no){
    this->Account_no=Account_no;

}
};
int main()
{
    // Static Object creation
    Student s1(12);
    cout<<"Call using simple object : "<<s1.get_no()<<endl;

    //DYnamic object creation

    Student *s2 = new Student(1345687989);
    cout<<"Print using dynamic object creation : "<<s2->get_no();

        return 0;
}

