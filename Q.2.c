#include<stdio.h>
int main()
{
    int x;
    printf("enter a number-");
    scanf("%d",&x);
    printf("%d number without last digit is %d",x,x/10);
    getch();
    return 0;
}
