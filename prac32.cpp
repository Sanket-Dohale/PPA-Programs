#include<iostream>

using namespace std;

class Addition
{
  public:
     int no1;
     int no2;


     Addition()
     {
        cout<<"constructor"<<"\n";
        no1 = 11;
        no2 = 21;
     }
      ~ Addition()
        {
            cout<<"Destructor"<<"\n";
        }

        void fun()
        {
            cout<<"Behaviour"<<"\n";
        }
};

int main()
{
  
  cout<<"inside main"<<"\n";

  Addition obj1;
  cout<<"size of object is : "<<sizeof(obj1)<<"\n";
  
  cout<<"value of no1 : "<<obj1.no1<<"\n";
  cout<<"value of no2 :" <<obj1.no2<<"\n";

  obj1.fun();


    return 0;
}