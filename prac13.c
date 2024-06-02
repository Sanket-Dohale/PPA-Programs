#include<stdio.h>
int main()

{
    int i = 11;
    char ch = 'A';
    float f = 35.38;
    double d = 524.258;

    int arr[5];
    double brr[5];
    char crr[5];
    float drr[5];


    printf("%d\n",sizeof(i));
    printf("%d\n",sizeof(ch));
    printf("%d\n",sizeof(f));
    printf("%d\n",sizeof(d));

    printf("%d\n",sizeof(arr));
    printf("%d\n",sizeof(brr));
    printf("%d\n",sizeof(crr));
    printf("%d\n",sizeof(drr));

    printf("%d\n",sizeof(arr[0]));
    printf("%d\n",sizeof(brr[3]));
    printf("%d\n",sizeof(crr[2]));
    printf("%d\n",sizeof(drr[4]));


    return 0;

}