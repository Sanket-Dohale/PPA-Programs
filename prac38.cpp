#include<iostream>
using namespace std;

class demo
{
    private:
      static int A;

      public:
      static int AA()
      {
        return A;
      }


};

 int demo::A = 10;
 
 int main()
 {
      cout<<demo::AA<<"\n";

     
     
     return 0;
 }