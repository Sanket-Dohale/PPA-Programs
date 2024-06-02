#include<stdio.h>
int main()
{
 int arr[] = {10,11,12,13,14,15};

 int *p = NULL;
 int *q = NULL;

 p = &arr[0];
 q = &arr[2];

 printf("%d\n",*p);
 printf("%d\n",*q);

 p = p+2;
 printf("%d\n",*p);

 q = q-2;
 printf("%d\n",*q);

    return 0;
}