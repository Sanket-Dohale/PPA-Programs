#include<stdio.h>

int main()
{
    int standard = 0;

    printf("Enter your standard : \n");
    scanf("%d",&standard);

    if(standard==1)
    {
        printf("hello\n");
    }

    else if(standard==2)
  {
      printf("Hii\n");
  }

  else if(standard==3)
  {
    printf("how r u\n");
  }

  else{
    printf("Wrong\n");
  }

  return 0;
}