#include<iostream>
using namespace std;
class A
{
    int id;
    static int count;
public:
    A()
    {
        //constructor of class A.
        count++;
        id=count;
        cout<<"constructor for id "<<id<<endl;
    }
    ~A()
    {
        //destructor of class A.
        cout<<"destructor for id "<<id<<endl;
    }
} ;
int A::count=0;
int main()
{
    A a[3];
    return 0;
}
