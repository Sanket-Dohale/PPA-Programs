#include<stdio.h>

struct demo
{
    int no;
    int data;
    float f;
    double d;
};

struct hello
{
    int c;

    struct demo obj1;
};

int main()
{
  struct hello obj2;

  obj2.c =10;
  obj2.obj1.no=11;
  obj2.obj1.data=13;
  obj2.obj1.f=14.4;
  obj2.obj1.d =15.5555;


  printf("%d\n",obj2.c);
  printf("%d\n",obj2.obj1.no);
  printf("%d\n",obj2.obj1.data);
  printf("%f\n",obj2.obj1.f);
  printf("%f\n",obj2.obj1.d);




    return 0;
}