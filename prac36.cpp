#include<iostream>
using namespace std;

class parent
{
   public:
     int no1,no2;

     parent()
     {
        cout<<"inside the constructor\n";
        no1 = 21;
        no2 = 51;
     }
     ~parent()
     {
        cout<<"inside the destructor\n";
     }

     void fun()
     {
        cout<<"Inside the fun\n";
     }
};

 class child : public parent
     {
       public:
         int x,y;

         child()
         {
            cout<<"inside the constructor\n";

            x = 101;
            y = 201;
         }  

         ~child()
         {
            cout<<"inside the child destructor\n";
         } 

         void gun()
         {
            cout<<"inside the child gun\n";
         }
     };

int main()
{
   child obj;

   cout<<"size of object is : "<<sizeof(obj)<<"\n";

   cout<<obj.no1<<"\n";
   cout<<obj.no2<<"\n";
   cout<<obj.x<<"\n";
   cout<<obj.y<<"\n";

   obj.fun();
   obj.gun();

  

    return 0;
}