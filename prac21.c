#include<stdio.h>

struct abhi
{
    int no ;
    int arr[3];
    float f;
};

int main()
{
 struct abhi obj1;

 obj1.no = 1;
 obj1.arr[0] = 2;
 obj1.arr[1] = 3;
 obj1.arr[2] = 4;
 obj1.f = 1.2;

 printf("%d\n",obj1.no);
 printf("%d\n",obj1.arr[0]);
 printf("%d\n",obj1.arr[1]);
 printf("%d\n",obj1.arr[2]);
 printf("%f\n",obj1.f);
    return 0;
}