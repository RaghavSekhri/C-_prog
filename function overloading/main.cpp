#include <iostream>

using namespace std;
class A
{
    public:
    void sum(int x,int y)
    {
        cout<<x+y;
    }
    void sum(int x,int y,int z)
    {
        cout<<x+y+z;
    }
    void sum(int x,int y,int z,int k)
    {
        cout<<x+y+z+k;
    }
};
int main()
{
    A obj;
    cout<<"How many numbers you want to add (max :4,min :2)?";
    int x;
    cin>>x;
    
    int array[4];
    for(int i=0;i<x;i++)
        cin>>array[i];
  switch(x)
  {case 2:sum(array[0],array[1]);break;
   case 3:sum(array[0],array[1],array[2]);break;
   case 4:sum(array[0],array[1],array[2],array[3]);break;
  }

    
    return 0;
}
