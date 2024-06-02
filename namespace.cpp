#include<iostream>

namespace Marvellous
{
    class Demo
    {
        // Logic
    };   
}

namespace PPA
{
    class Hello
    {
        // Logic
    };   
}
using namespace Marvellous;

int main()
{
    std::cout<<"Inside main\n";
    Demo dobj;
    PPA::Hello hobj;

    return 0;
}
