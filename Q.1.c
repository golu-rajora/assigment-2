#include<stdio.h>
int main()
{
    int x;
    printf("enter a number-");
    scanf("%d",&x);
    printf("given number %d of unit number is - %d ",x,x%10);
    getch();
    return 0;

}
