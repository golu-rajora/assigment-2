#include<stdio.h>
int main()
{
    int x;
    printf("enter a number-");
    scanf("%d",&x);
    int y=x%10;
    x=x/10;
    y=y*100+x;
    printf("one roatate number is-%d",y);
    getch();
    return 0;

}
