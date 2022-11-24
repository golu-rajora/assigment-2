#include<stdio.h>
int main()
{
    int x,y;
    printf("enter a number-");
    scanf("%d",&x);
    y=x/10;
    y=y*10;
    printf("\n the given number %d to chance last digit stored in 0 then number is - %d",x,y);
    getch();
    return 0;
}
