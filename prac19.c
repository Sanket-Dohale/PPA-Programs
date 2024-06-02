#include<stdio.h>

int multiplication(int a ,int b)
{

    int ans = 0;
    ans = a * b;

    return ans;
}

int main()
{
  int no1=0,no2=0,ret=0;

  printf("Enter first Number : \n");
  scanf("%d",&no1);

  printf("Enter second Number : \n");
  scanf("%d",&no2);

  int (*fptr) (int,int);
  fptr = multiplication;

  ret = fptr(no1,no2);

  printf("multiplication is : %d",ret);

 

    return 0;
}