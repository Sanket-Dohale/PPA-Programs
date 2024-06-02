#include<stdio.h>

void Display()
{
    printf("Congratulation...!");
}

int main()
{
    int Marathi = 0;
    int English = 0;
    int Hindi = 0;
    int math = 0;
    int Science = 0;
    int Social_Science = 0;
    int total = 0;

    printf("Enter marks in marathi : \n");
    scanf("%d",&Marathi);

    printf("Enter marks in english : \n");
    scanf("%d",&English);

    printf ("Enter marks in hindi : \n");
    scanf("%d",&Hindi);

    printf("Enter marks in Science : \n");
    scanf("%d",&Science);

    printf("Enter marks in Social Science : \n");
    scanf("%d",&Social_Science);

    total =  Marathi + Hindi + English + Science + Social_Science;

    printf("Total marks is : %d \n",total);

    Display();

    return 0;

}