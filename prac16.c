#include<stdio.h>

int main()
{
    int standard = 0;

    printf("Enter your standard : \n");
    scanf("%d",&standard);


    switch(standard)
    {
        case 1 :
        printf("Hello\n");
        break;

        case 2:
        printf("hii\n");
        break;

        case 3 :
        printf("how r u \n");
        break;


        default :

        printf("Wrong\n");
        break;

    }



    return 0;
}