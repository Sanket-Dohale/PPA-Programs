#include<stdio.h>

void Display()
{
    printf("Display function work properly\n");
}

int Addition(int no1,int no2)
{
int ans = 0;

  ans = no1 + no2;

return ans;
}

int main()
{
    int a = 30;
    int b = 40;
    int ram = 0;

    printf("Main function madhe kay kartoy...\n");

    ram = Addition(a,b);

    printf("The addition is %d\n",ram);

    Display();

    return 0;



}