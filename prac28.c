#include<stdio.h>

int multiplication(int va1,int va2)
{
    int ans1 = 0;
    ans1 = va1 * va2;
    return ans1;
}

int main()
{
 int no = 0;
 int no1 =0;
 int ans = 0;

 int(*fptr)(int,int);
 fptr = multiplication;

 printf("Enter first number : ");
 scanf("%d",&no);

 printf("Enter second number : ");
 scanf("%d",&no1);

 ans = fptr(no,no1);

 printf("Ans is : %d ",ans);


    return 0;
}