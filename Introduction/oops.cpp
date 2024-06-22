#include<iostream>
using namespace std;
class name
{
    public:
    name(int a)
    {
    this->a = a;
    }
int a;
public:
void printValue()
{
    cout<<a;
}

};
class address : public name{
public:
int b;
static int a;
address(int b,int a):name(a)
{
    this->b = b;
}
void printData()
{
    cout<<a<<b<<endl;
}
static int Value()
{
cout<<"dinesh";
}
};
class Student
{
    private:
    int a;
    public:
    Student(int a)
    {
 this->a = a;
    }
    public:
    void displayData()
    {
       cout<<a;
    }
};
int address::a=10; // we have to initial the value
int main()
{
    // name obj(10);
    // obj.printValue();
    address obj(10,20);
    obj.printData();

    Student student(10);
    student.displayData();
    
}



