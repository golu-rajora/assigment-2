#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the two number-");
    scanf("%d %d",&a,&b);
    printf("first value is a=%d and second value is b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("swap the value is a=%d and b=%d",a,b);
    getch();
    return 0;

}
