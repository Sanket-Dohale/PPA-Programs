#include<stdio.h>

#pragma pack(1)

struct demo
{
    int a;
    int b;
    float c;
    char ch;
};

int main()
{
    struct demo obj1;

    obj1.a = 11;
    obj1.b = 20;
    obj1.c = 30.33;
    obj1.ch = 'A';



    printf("value of a is : %d\n",obj1.a);
    printf("value of b is : %d\n",obj1.b);
    printf("value of c is : %f\n",obj1.c);
    printf("value of ch is : %c\n",obj1.ch);

    printf("Size of obj1 is : %d\n",sizeof(obj1));



    return 0;
}