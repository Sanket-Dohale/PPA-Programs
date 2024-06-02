#include<iostream>

using namespace std;

class sub
{
  public:
    int x,y;

    static int z;

    sub()
    {
        x = 21;
        y = 51;
    }

    void fun()
    {
        cout<<"fun\n";
        cout<<x<<"\n";
        cout<<z<<"\n";
    }

    static void gun()
    {
        cout<<"static gun\n";
        cout<<z<<"\n";
    }
};

int sub:: z = 101;

int main()
{
    sub obj1;
    sub obj2;

  cout<<"Size of object is : "<<sizeof (obj1)<<"\n";
  sub::gun();

  cout<<"value of z is : "<<sub::z<<"\n";

  cout<<obj1.x<<"\t"<<obj1.y<<"\n";
  cout<<obj2.x<<"\t"<<obj2.y<<"\n";

  obj1.fun();
  obj2.fun();


    return 0;
}