#include<iostream>
using namespace std;

class Airthmatic
{
   public:
     int no1;
     int no2;

     Airthmatic()
     {
        cout<<"constructor"<<"\n";
        no1 = 0;
        no2 = 0;
     }

     Airthmatic(int A , int B)
     {
        no1 = A;
        no2 = B;
     }

     Airthmatic(Airthmatic &ref)
     {
        no1 = ref.no1;
        no2 = ref.no2;
     }

     ~Airthmatic()
     {
        cout<<"Distructor"<<"\n";
     }
};

int main()
{

  Airthmatic obj1;
  Airthmatic obj2(11,51);
  Airthmatic obj3(obj2);

  cout<<obj1.no1<<"\t"<<obj1.no2<<"\n";
  cout<<obj2.no1<<"\t"<<obj2.no2<<"\n";
  cout<<obj3.no1<<"\t"<<obj3.no2<<"\n";

}