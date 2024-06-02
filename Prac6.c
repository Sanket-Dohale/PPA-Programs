#include<stdio.h>

int main()
{
 int Standard = 0;

 printf("Enter Standard : \n");
 scanf("%d",&Standard);

 switch(Standard)
 {
    case 1:
    printf("your exam is at 7am\n");
    break;

    case 2:
    printf("your exam is 8am\n");
    break;

    case 3:
    printf("your exam is at 9am\n");
    break;

    case 4:
    printf("your exam is at 10am\n");
    break;

    default :
    printf("Wrong choice...!");
    break;

 }



    return 0;
}