#include<stdio.h>

struct sanket
{
    int no;
    float f;
    int i;
};

int main()
{
 struct sanket sobj;

 struct sanket *sptr = &sobj;

 sptr->no =10;
 sptr->f = 10.10;
 sptr->i = 20;

 printf("First : %d\n",sptr->no);
 printf("Second : %f\n",sptr->f);
 printf("Third : %d\n",sptr->i);


    return 0;
}