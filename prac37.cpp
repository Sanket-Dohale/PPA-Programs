#include<iostream>
using namespace std;

class parent
{
   public:
     int A,B;

     void gun()
     {
        cout<<"Inside the parent gun\n";
     }

     virtual void run()
     {
        cout<<"Inside parent run\n";
     }

      void sun()
     {
        cout<<"Inside parent sun\n";
     }
};

class child : public parent
{
    public:
      int X,Y;

       void gun()
      {
        cout<<"inside child gun\n";
      }

      virtual void run()
      {
        cout<<"inside child run\n";
      }

      void sun()
      {
        cout<<"Inside child sun\n";
      }
};

class Gchild : public parent
{
    public:
      int X,Y;

       void gun()
      {
        cout<<"inside Gchild gun\n";
      }

      void run()
      {
        cout<<"inside Gchild run\n";
      }

      void sun()
      {
        cout<<"Inside Gchild sun\n";
      }
};

int main()
{

   child cobj;

   parent *pp = &cobj;
   cout<<"size of parent class object is : \n"<<sizeof(parent)<<"\n";
   cout<<"Size of child class object is : \n"<<sizeof(child)<<"\n";
   cout<<"Size of Gchild class object is : \n"<<sizeof(Gchild)<<"\n";

   //pp->fun();
   pp->run();
   pp->sun();
   pp->gun();
   pp->run();
   pp->sun();


    return 0;
}