#include<stdio.h>

int multiplication(int no1,int no2)
{
    int ans = 0;
    ans = no1 * no2;
    return ans;
}

int main()

{
     int value1 = 0,value2 = 0,Ret = 0;
     
     int (*fptr)(int,int);

     fptr = multiplication;
     
     printf ("Enter the first value : \n");
     scanf("%d",&value1);
     
     printf("Enter second value : \n");
     scanf("%d",&value2);
     
     Ret = fptr(value1,value2);
     
     printf("multiplication is : %d\n",Ret);

     int arr [] = {10,11,12,13,14,15};

     int *ptr = &(arr[0]);

     printf("%d\n",*ptr);
     printf("%d\n",&arr[0]);
    
    
    
    return 0;
}