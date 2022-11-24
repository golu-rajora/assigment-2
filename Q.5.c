#include<stdio.h>
int main()
{
    int x;
    printf("enter a number in which 3 digit-");
    scanf("%d",&x);
    int y;
    y=x%10;
    x=x/10;
    int z;
    z=x%10;
    x=x/10;
    int w;
    w=x%10;
    x=x/10;
    int sum;
    sum=y+z+w;
    printf("sum of the digit is %d",sum);
    getch();
    return 0;
}
