#include<stdio.h>

void Display()
{
    printf("Hey Display function madhal ahe\n");
}


int Addition(int no1,int no2)
{
    int Ans = 0;

     Ans = no1+no2;

     return Ans;
}
int main()
{
    int a = 20;
    
    int b = 25;

    int san = 0;

    printf("Main function madhe Swagat ahe\n");

    san = Addition(a,b);

    printf("The value is %d\n",san);

    Display();
    return 0;

}