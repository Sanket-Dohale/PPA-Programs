#include<stdio.h>

  void Display()
{
   printf("Program execute succesfully\n");
}

int main()
{
    int a = 0;
    int b = 0;
    int ans = 0;
    int dis = 0;
    
    printf("Enter the first no : \n");
    scanf("%d",&a);
    
    printf("Enter the second no : \n");
    scanf("%d",&b);
    
    ans = a + b;
    
    printf("Answer is : %d\n",ans);
    
    dis = ans % 2;
    
    printf("After the division Remainder is : %d\n",dis);
    
    
    if(dis==0)
    {
        printf("The number is even\n");
    }
    else
    {
        printf("Answer is odd\n");
    }
    

    Display();
    
    return 0;
}