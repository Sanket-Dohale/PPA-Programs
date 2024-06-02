#include<stdio.h>

void Display()
{
    printf("DISPLAY");
}

int Addition(int no1,int no2)
{
    int ans = 0;

    ans = no1 + no2;

    return ans;
}
int main()
{
    int a = 90;
    int b = 80;
    int wet = 0;

    printf("FUNCTION\n");

    wet = Addition(a,b);

    printf("ANS:%d\n",wet);

    Display();

    return 0;
}