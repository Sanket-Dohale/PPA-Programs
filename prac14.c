#include<stdio.h>

int main()
{

    int no1 = 0;
    int no2 = 0;
    int ans = 0;

    printf("Enter the first number : \n");
    scanf("%d",&no1);

    printf("Enter the second number : \n");
    scanf("%d",&no2);

    ans = no1 + no2;
    
    printf("Addition is : %d\n",ans);

    return 0;
}