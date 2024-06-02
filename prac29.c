#include<stdio.h>
#pragma pack(1)

struct demo
{
    int no1;
    int no2;
    int ans;
    char ch;
};

int main()
{
    
   struct demo obj1;
   
   obj1.no1 = 0;
   obj1.no2 = 0;
   obj1.ans = 0;
   obj1.ch = '0';
   
   printf("Enter the first no : \n");
   scanf("%d",&obj1.no1);
   
   printf("Enter the second no : \n");
   scanf("%d",&obj1.no2);
   
   obj1.ans = obj1.no1 + obj1.no2;
   printf("Addition is : %d\n",obj1.ans);

   printf("Can you print the size of struct : \n");
   printf("y for yes\nn for no\n");
   
   printf("Enter your choice : \n");
   scanf(" %c",&obj1.ch);
   

  if(obj1.ch == 'y' || obj1.ch == 'Y')
{
   printf("size of struct is : %d\n", sizeof(obj1));
}

else if(obj1.ch == 'n' || obj1.ch == 'N')
{
   printf("Thank u\n");
}

else
{
   printf("Wrong choice\n");
}

    
    return 0;
}