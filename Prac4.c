#include<stdio.h>

void Display()
{
    printf("Program run succesfully\n");
}


int main()
{

  int no = 0;
  int ans = 0;


  printf("Enter the number:\n");
  scanf("%d",&no);


   ans = no % 2;

   if(ans==0)

   {
    printf("number is even\n");
   }

   else
   {
    printf("number is odd \n");
   }

    Display();
    return 0;
}