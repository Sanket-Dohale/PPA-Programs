#include<stdio.h>

int main()
{

   int no1 = 0,no2 = 0,ans = 0;
   float no3 = 0,no4 = 0,ans1 = 0;
   char choice ='0';

   printf("\n\nplease Enter which function do you use :-\n\n");
   printf("A : Addition\nB : Substraction\nC : Multiplication\nD : Division\n\n");

   printf("Enter your choice : ");
   scanf("%c",&choice);

   switch(choice)
   {
    case 'A':
    case 'a':

    printf("\nYou are selected Addition\n\n");

    printf("Enter first number : \n");
    scanf("%d",&no1);

    printf("Enter second number : \n");
    scanf("%d",&no2);

    ans = no1 + no2;

    printf("Addition is : %d\n",ans);

    break;

    case 'B':
    case 'b':

    printf("\nYou are selected Substraction\n\n");

    printf("Enter first number : \n");
    scanf("%d",&no1);

    printf("Enter second number : \n");
    scanf("%d",&no2);

    ans = no1 - no2;

    printf("Substraction is : %d\n",ans);

    break;

    case 'C':
    case 'c':

    printf("\nYou are selected Multiplication\n\n");

    printf("Enter first number : \n");
    scanf("%d",&no1);

    printf("Enter second number : \n");
    scanf("%d",&no2);

    ans = no1 * no2;

    printf("Multiplication is : %d\n",ans);

    break;

    case 'D':
    case 'd':

    printf("\nYou are selected Division\n\n");

    printf("Enter first number : \n");
    scanf("%f",&no3);

    printf("Enter second number : \n");
    scanf("%f",&no4);

    ans1 = no3 / no4;

    printf("Division is : %g\n",ans1); //insted of %f specifier we use %g specifier which removes extra zeros

    break;

    default:

    printf("Wrong choice!!!\n");
    break;
    
   }

    return 0;
}