#include<stdio.h>

int main()
{
    int no1 = 0;
    int no2 = 0;
    float no3 = 0;
    float no4 = 0;
    char choice = '0';
    
    printf("Enter your choice :-\n\n");
    printf("A for Addition\nB for substraction\nC for multiplication\nD for Division\n\n");

    printf("Your choice : ");
    scanf(" %c",&choice);
    printf("\n");
    

   switch(choice)
   {
       case 'A':
       case 'a':

      printf("You choose addition\n\n");
      printf("Enter First Number : \n");
      scanf("%d",&no1);
    
      printf("Enter Second Number : \n");
      scanf("%d",&no2);
    
      printf("Addition is : %d\n",no1 + no2);
      break;
       
       case 'B':
       case 'b':

      printf("You choose subtraction\n\n");
      printf("Enter First Number : \n");
      scanf("%d",&no1);
    
      printf("Enter Second Number : \n");
      scanf("%d",&no2);
    
     printf("Subtraction is : %d\n",no1 - no2);
     break;
       
       case 'C':
       case 'c':
       
      printf("You choose multiplication\n\n");
      printf("Enter First Number : \n");
      scanf("%d",&no1);
    
      printf("Enter Second Number : \n");
      scanf("%d",&no2);
    
      printf("Multiplication is : %d\n",no1 * no2);
      break;

      case 'D':
      case 'd':

      printf("You choose division\n\n");
      printf("Enter First Number : \n");
      scanf("%f",&no3);
    
      printf("Enter Second Number : \n");
      scanf("%f",&no4);

      printf("Division is :%f",no3 / no4);
      break;
       
      default:
      printf("Wrong choice...!\n");
   }
    return 0;
}