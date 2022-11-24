#include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter a number-");
    scanf("%d",&x);
    printf("enter the last digit number-");
    scanf("%d",&z);
    y=x*10;
    y=y+z;
    printf("\n the given number %d and last digit is %d and add to last digit of the given number is-%d",x,z,y);
    getch();
    return 0;
}

