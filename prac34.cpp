#include<iostream>

using namespace std;

class demo
{

    public: 
      int i;

    private:
      int j;

    protected:
      int k;

    public:
      demo()
    {
        int i =11;
        int j = 21;
        int k = 51;
    }
};

int main()
{
   demo obj;

   cout<<obj.i;
   cout<<obj.j;
   cout<<obj.k;

    return 0;
}