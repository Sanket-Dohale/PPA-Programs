#include<stdio.h>

int multiplication(int a ,int b)
{
    int ans = 0;

    ans = a * b;

    return ans;
}
int main()
{
 int value1 =0,value2 =0,set=0;
 int(*fptr) (int,int);
 fptr = multiplication;

 printf("Enter first number : \n");
 scanf("%d",&value1);

 printf("Enter the second number : \n");
 scanf("%d",&value2);

 set = fptr(value1,value2);

printf("Multiplication is : %d\n",set);
    return 0;
}