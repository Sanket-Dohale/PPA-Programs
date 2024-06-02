#include<stdio.h>
int main()
{
  int arr[]={10,11,12,13,14,15};

  int *aptr = arr;

  int *p = &arr[0];
  int *q = &arr[3];

  printf("%d\n",*p);
  printf("%d\n",*q);
  

    return 0;
}